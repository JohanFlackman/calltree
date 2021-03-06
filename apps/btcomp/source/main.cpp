/*
 *
 * Copyright (C) 2009, Joacim Jacobsson ( j dot jacobsson at gmail dot com )
 * All rights reserved.
 *
 * See LICENSE file for details
 *
 */

#include <stdlib.h>
#include <other/getopt.h>

#include <btree/btree.h>
#include "generate/program.h"
#include "xgml_printer.h"

int main( int argc, char** argv )
{
    GetOptContext ctx;
    init_getopt_context( &ctx );
    char c;

    FILE* outputFile     = 0x0;
    char* inputFileName  = 0x0;
    char* outputFileName = "a.out";
    bool  swapEndian     = false;
    char* asmFileName    = 0x0;
    char* xgmlFileName   = 0x0;
    bool  debug          = false;

    while( (c = getopt(argc, argv, "?i:o:a:dex:", &ctx)) != -1 )
    {
        switch( c )
        {
        case 'i':
            inputFileName = ctx.optarg;
            break;
        case 'o':
            outputFileName = ctx.optarg;
            break;
        case 'e':
            swapEndian = true;
            break;
        case 'a':
            asmFileName = ctx.optarg;
            break;
        case 'd':
            debug = true;
            break;
        case 'x':
            xgmlFileName = ctx.optarg;
            break;
        case '?':
            fprintf( stdout, "Behaviour Tree Compiler Version 0.1\n\n" );
            fprintf( stdout, "Options:\n" );
            fprintf( stdout, "\t-i\tInput file\n" );
            fprintf( stdout, "\t-o\tOutput file (defaults to \"a.out\")\n" );
            fprintf( stdout, "\t-a\tOutput text file of generated callback instructions. (optional)\n" );
            fprintf( stdout, "\t-x\tOutput a xgml file of the parsed tree\n" );
            fprintf( stdout, "\t-e\tEndian swap the output file.\n" );
            fprintf( stdout, "\t-d\tGenerate debug info\n" );
            fprintf( stdout, "\t-?\tPrint this message and exit.\n\n" );
            return 0;
            break;
        }
    }

    int returnCode = 0;

    if( !inputFileName )
    {
        returnCode = -1;
        fprintf( stderr, "error: No input file given.\n" );
    }

    if( returnCode == 0 )
    {
        BehaviorTree bt;
        bt.Define( "_BTREE_COMPILER_" );
        returnCode = bt.Parse( inputFileName );

        if( returnCode == 0 )
        {
        	Program p;
        	p.m_I.SetGenerateDebugInfo( debug );

        	setup_before_generate( bt.m_Root, &p );
       		returnCode = generate_program( bt.m_Root, &p );
       		teardown_after_generate( bt.m_Root, &p );

       		if( returnCode != 0 )
       		{
       			fprintf( stderr, "error: Internal compiler error.\n" );
       		}

			if( returnCode == 0 && asmFileName )
			{
				FILE* asmFile = fopen( asmFileName, "w" );
				if( !asmFile )
				{
					fprintf( stderr, "warning: Unable to open assembly file %s for writing.\n", asmFile );
				}
				else
				{
					print_program( asmFile, &p );
					fclose( asmFile );
				}
			}

            outputFile = fopen( outputFileName, "wb" );
            if( !outputFile )
            {
                fprintf( stderr, "error: Unable to open output file %s for writing.\n", outputFileName );
                returnCode = -2;
            }

            if( returnCode == 0 )
            	returnCode = save_program( outputFile, swapEndian, &p );
            if( returnCode != 0 )
            {
                fprintf( stderr, "error: Failed to write output file %s.\n", outputFileName );
                returnCode = -5;
            }

            if( xgmlFileName )
            {

                XGMLPrinter xgml_printer;
                xgml_printer.Visit( bt.m_Root );
                xgml_printer.Layout();
                FILE* xgml_file = fopen( xgmlFileName, "w" );
                if( xgml_file )
                {
                    xgml_printer.Print( xgml_file );
                    fclose( xgml_file );
                }
                else
                {
                    fprintf( stderr, "warning: Unable to open xgml file \"%s\" for writing.\n", xgmlFileName );
                }
            }
        }
    }

    if( outputFile )
        fclose( outputFile );

    return returnCode;
}
