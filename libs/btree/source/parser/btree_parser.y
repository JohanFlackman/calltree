/*
 *
 * Copyright (C) 2009, Joacim Jacobsson ( j dot jacobsson at gmail dot com )
 * All rights reserved.
 *
 * See LICENSE file for details
 *
 */

%pure-parser
%parse-param { ParserContext* ctx }
%parse-param { void* scanner }
%lex-param   { yyscan_t* scanner }

%start nt_behaviour_tree

%{
#include "common.h"

#define YYMALLOC malloc
#define YYFREE free

bool DeclareAction( ParserContext* ctx, const Identifier& id, Variable* vars, Variable* args );
bool DeclareDecorator( ParserContext* ctx, const Identifier& id, Variable* vars, Variable* args );
bool DeclareNode( ParserContext* ctx, const Identifier& id, NodeGrist* grist );

%}

%token            T_ROOT         /* literal string "root" */
%token            T_NODE         /* literal string "node" */
%token<m_Id>      T_ID           /* a legal identifier string */
%token            T_COLON        /* ':' */
%token            T_SEMICOLON    /* ';' */
%token            T_COMMA        /* ',' */
%token            T_ASSIGNMENT   /* '=' */
%token            T_SEQUENCE     /* literal string "sequence" */
%token            T_SELECTOR     /* literal string "selector" */
%token            T_DSELECTOR    /* literal string "dyn_selector" */
%token            T_PARALLEL     /* literal string "parallel" */
%token            T_ACTION       /* literal string "action" */
%token            T_DECORATOR    /* literal string "decorator" */
%token            T_INT32        /* literal string "int32" */
%token            T_BOOL         /* literal string "bool" */
%token            T_FLOAT        /* literal string "float" */
%token            T_STRING       /* literal string "string" */
%token<m_Integer> T_INT32_VALUE  /* a integer value */
%token<m_Bool>    T_BOOL_VALUE   /* a boolean value (i.e. "true" or "false) */
%token<m_Float>   T_FLOAT_VALUE  /* a float value */
%token<m_String>  T_STRING_VALUE /* a string value */
%token            T_END_OF_FILE  /* end of file token */

%union {
    Node*          m_Node;
    Identifier     m_Id;
    NodeGrist*     m_NodeGrist;
    NodeList*      m_NodeList;
    Action*        m_Action;
    Decorator*     m_Decorator;
    int            m_Integer;
    float          m_Float;
    bool           m_Bool;
    const char*    m_String;
    Variable*      m_Variable;
}

%type<m_Id>			  nt_id
%type<m_Node>		  nt_node_ref
%type<m_Action>		  nt_action_ref
%type<m_Decorator>	  nt_decorator_ref
%type<m_NodeGrist>	  nt_node_grist
%type<m_NodeGrist>	  nt_selector_node_grist
%type<m_NodeGrist>	  nt_dyn_selector_node_grist
%type<m_NodeGrist>	  nt_sequence_node_grist
%type<m_NodeGrist>	  nt_parallel_node_grist
%type<m_NodeGrist>	  nt_decorator_node_grist
%type<m_NodeGrist>	  nt_action_node_grist
%type<m_NodeList>	  nt_node_list
%type<m_Variable>	  nt_variable_dec
%type<m_Variable>	  nt_variable
%type<m_Variable>     nt_variable_dec_list
%type<m_Variable>     nt_variable_list

%destructor { /* do nothing */ }                      nt_id
%destructor { /* do nothing */ }		              T_ID
%destructor { /* do nothing */ }					  nt_node_ref
%destructor { /* do nothing */ }					  nt_action_ref
%destructor { /* do nothing */ }					  nt_decorator_ref
%destructor { ctx->m_Tree->FreeNodeList( $$ ); }	  nt_node_list
%destructor { ctx->m_Tree->FreeNodeGrist( $$ ); }	  nt_node_grist
%destructor { ctx->m_Tree->FreeNodeGrist( $$ ); }	  nt_selector_node_grist
%destructor { ctx->m_Tree->FreeNodeGrist( $$ ); }	  nt_dyn_selector_node_grist
%destructor { ctx->m_Tree->FreeNodeGrist( $$ ); }	  nt_sequence_node_grist
%destructor { ctx->m_Tree->FreeNodeGrist( $$ ); }	  nt_parallel_node_grist
%destructor { ctx->m_Tree->FreeNodeGrist( $$ ); }	  nt_decorator_node_grist
%destructor { ctx->m_Tree->FreeNodeGrist( $$ ); }	  nt_action_node_grist
%destructor { DeleteVariableList( $$ ); }			  nt_variable_dec
%destructor { DeleteVariableList( $$ ); }			  nt_variable
%destructor { DeleteVariableList( $$ ); }			  nt_variable_dec_list
%destructor { DeleteVariableList( $$ ); }			  nt_variable_list

%%

nt_behaviour_tree
:
nt_declaration_list T_END_OF_FILE
{
    YYACCEPT;
}
;

nt_declaration_list
:
nt_declaration_list nt_declaration
|
nt_declaration
;

nt_declaration
:
nt_action_dec
|
nt_decorator_dec
|
nt_node_dec
|
nt_root_dec
|
T_SEMICOLON

;

nt_action_dec
:
T_ACTION T_COLON nt_id T_COLON nt_variable_list T_COLON nt_variable_dec_list T_SEMICOLON
{
	if( !DeclareAction( ctx, $3, $5, $7 ) )
		YYERROR;
}
|
T_ACTION T_COLON nt_id T_COLON nt_variable_list T_SEMICOLON
{
	if( !DeclareAction( ctx, $3, $5, 0x0 ) )
		YYERROR;
}
;

nt_decorator_dec
:
T_DECORATOR T_COLON nt_id T_COLON nt_variable_list T_COLON nt_variable_dec_list T_SEMICOLON
{
	if( !DeclareDecorator( ctx, $3, $5, $7 ) )
		YYERROR;
}
|
T_DECORATOR T_COLON nt_id T_COLON nt_variable_list T_SEMICOLON
{
	if( !DeclareDecorator( ctx, $3, $5, 0x0 ) )
		YYERROR;
}
;

nt_node_dec
:
T_NODE T_COLON nt_id T_COLON nt_node_grist
{
	if( !DeclareNode( ctx, $3, $5 ) )
		YYERROR;
}
;

nt_root_dec
:
T_ROOT T_COLON nt_node_ref T_SEMICOLON
{
    ctx->m_Tree->SetRootNode( $3 );
}
;

nt_node_grist
:
nt_selector_node_grist
{
    $$ = $1;
}
|
nt_dyn_selector_node_grist
{
    $$ = $1;
}
|
nt_sequence_node_grist
{
    $$ = $1;
}
|
nt_parallel_node_grist
{
    $$ = $1;
}
|
nt_decorator_node_grist
{
    $$ = $1;
}
|
nt_action_node_grist
{
    $$ = $1;
}
;

nt_selector_node_grist
:
T_SELECTOR T_COLON nt_node_list T_SEMICOLON
{
    $$ = ctx->m_Tree->CreateNodeGrist( E_GRIST_SELECTOR );
    static_cast<SelectorNodeGrist*>( $$ )->SetChildList( $3 );
}
;

nt_dyn_selector_node_grist
:
T_DSELECTOR T_COLON nt_node_list T_SEMICOLON
{
    $$ = ctx->m_Tree->CreateNodeGrist( E_GRIST_DYN_SELECTOR );
    static_cast<DynamicSelectorNodeGrist*>( $$ )->SetChildList( $3 );
}
;

nt_sequence_node_grist
:
T_SEQUENCE T_COLON nt_node_list T_SEMICOLON
{
    $$ = ctx->m_Tree->CreateNodeGrist( E_GRIST_SEQUENCE );
    static_cast<SequenceNodeGrist*>( $$ )->SetChildList( $3 );
}
;

nt_parallel_node_grist
:
T_PARALLEL T_COLON nt_node_list T_SEMICOLON
{
    $$ = ctx->m_Tree->CreateNodeGrist( E_GRIST_PARALLEL );
    ParallelNodeGrist* grist = static_cast<ParallelNodeGrist*>( $$ );
    grist->SetChildList( $3 );
}
;

nt_decorator_node_grist
:
T_DECORATOR T_COLON nt_decorator_ref T_COLON nt_node_ref T_SEMICOLON
{
    $$ = ctx->m_Tree->CreateNodeGrist( E_GRIST_DECORATOR );
    DecoratorNodeGrist* grist = static_cast<DecoratorNodeGrist*>($$);
    grist->SetDecorator( $3 );
    grist->SetChild( $5 );
}
|
T_DECORATOR T_COLON nt_decorator_ref T_COLON nt_node_ref T_COLON nt_variable_list T_SEMICOLON
{
    $$ = ctx->m_Tree->CreateNodeGrist( E_GRIST_DECORATOR );
    DecoratorNodeGrist* grist = static_cast<DecoratorNodeGrist*>($$);
    grist->SetDecorator( $3 );
    grist->SetChild( $5 );
    grist->SetVariableList( $7 );
}
;

nt_action_node_grist
:
T_ACTION T_COLON nt_action_ref T_SEMICOLON
{
    $$ = ctx->m_Tree->CreateNodeGrist( E_GRIST_ACTION );
    static_cast<ActionNodeGrist*>($$)->SetAction( $3 );
}
|
T_ACTION T_COLON nt_action_ref T_COLON nt_variable_list T_SEMICOLON
{
    $$ = ctx->m_Tree->CreateNodeGrist( E_GRIST_ACTION );
    ActionNodeGrist* grist = static_cast<ActionNodeGrist*>($$);
    grist->SetAction( $3 );
    grist->SetVariableList( $5 );
}
;

nt_node_list
:
/* empty */
{
    $$ = ctx->m_Tree->CreateNodeList();
}
|
nt_node_list T_COMMA nt_node_ref
{
    if( $3->m_IsChild  )
    {
        ctx->m_Tree->FreeNodeList( $1 );
        char tmp[2048];
        sprintf( tmp, "child node \"%s\" already has a parent.", $3->m_Id.m_Text );
        yyerror( ctx, scanner, tmp );
        YYERROR;
    }
    if( !$1->Append( $3 ) )
    {
        ctx->m_Tree->FreeNodeList( $1 );
        yyerror( ctx, scanner, "number of allowed child-nodes exceeded." );
        YYERROR;
    }
    $$ = $1;
}
|
nt_node_ref
{
    if( $1->m_IsChild  )
    {
        char tmp[2048];
        sprintf( tmp, "child node \"%s\" has a parent.", $1->m_Id.m_Text );
        yyerror( ctx, scanner, tmp );
        YYERROR;
    }
    NodeList* cl = ctx->m_Tree->CreateNodeList();
    if( !cl->Append( $1 ) )
    {
        ctx->m_Tree->FreeNodeList( cl );
        yyerror( ctx, scanner, "number of allowed child-nodes exceeded." );
        YYERROR;
    }
    $$ = cl;
}
;


nt_node_ref
:
nt_id
{
    Node* n = ctx->m_Tree->LookupNode( $1 );
    if( n == 0x0 )
    {
        char tmp[2048];
        sprintf( tmp, "node \"%s\" has not been declared.\n", $1.m_Text );
        yyerror( ctx, scanner, tmp );
        YYERROR;
    }
    $$ = n;
}
;

nt_action_ref
:
nt_id
{
    Action* a = ctx->m_Tree->LookupAction( $1 );
    if( !a )
    {
    	a = new Action;
    	InitAction( a );
    	a->m_Id = $1;
    	ctx->m_Tree->RegisterAction( a );
    }
    $$ = a;
}
;

nt_decorator_ref
:
nt_id
{
    Decorator* d = ctx->m_Tree->LookupDecorator( $1 );
    if( !d )
    {
    	d = new Decorator;
    	InitDecorator( d );
    	d->m_Id = $1;
    	ctx->m_Tree->RegisterDecorator( d );
    }
    $$ = d;
}
;

nt_id
:
T_ID
{
    $$ = $1;
}
;

nt_variable_dec_list
:
/* empty */
{
    $$ = 0x0;
}
|
nt_variable_dec_list T_COMMA nt_variable_dec
{
	if( $1 )
	{
		AppendToEndOfList( $1, $3 );
		$$ = $1;
	}	
	else
	{
		$$ = $3;
	}
}
|
nt_variable_dec
{
	$$ = $1;
}
;

nt_variable_dec
:
T_STRING T_ID
{
    $$ = new Variable;
	InitVariable( $$ );
    $$->m_Type = E_VART_STRING;
    $$->m_Id = $2;
}
|
T_INT32 T_ID
{
    $$ = new Variable;
   	InitVariable( $$ );
    $$->m_Type = E_VART_INTEGER;
    $$->m_Id = $2;
}
|
T_FLOAT T_ID
{
    $$ = new Variable;
	InitVariable( $$ );
    $$->m_Type = E_VART_FLOAT;
    $$->m_Id = $2;
}
|
T_BOOL T_ID
{
    $$ = new Variable;
	InitVariable( $$ );
    $$->m_Type = E_VART_BOOL;
    $$->m_Id = $2;
}
;

nt_variable_list
:
/* empty */
{
    $$ = 0x0;
}
|
nt_variable_list T_COMMA nt_variable
{
	if( $1 )
	{
		AppendToEndOfList( $1, $3 );
		$$ = $1;
	}	
	else
	{
		$$ = $3;
	}
}
|
nt_variable
{
	$$ = $1;
}
;

nt_variable
:
T_ID T_ASSIGNMENT T_STRING_VALUE
{
    $$ = new Variable;
    InitVariable( $$ );
    $$->m_Type = E_VART_STRING;
    $$->m_Id = $1;
    $$->m_Data.m_String = $3;
}
|
T_ID T_ASSIGNMENT T_INT32_VALUE
{
    $$ = new Variable;
    InitVariable( $$ );
    $$->m_Type = E_VART_INTEGER;
    $$->m_Id = $1;
    $$->m_Data.m_Integer = $3;
}
|
T_ID T_ASSIGNMENT T_FLOAT_VALUE
{
    $$ = new Variable;
    InitVariable( $$ );
    $$->m_Type = E_VART_FLOAT;
    $$->m_Id = $1;
    $$->m_Data.m_Float = $3;
}
|
T_ID T_ASSIGNMENT T_BOOL_VALUE
{
    $$ = new Variable;
    InitVariable( $$ );
    $$->m_Type = E_VART_BOOL;
    $$->m_Id = $1;
    $$->m_Data.m_Integer = $3;
}
;


%%

bool DeclareAction( ParserContext* ctx, const Identifier& id, Variable* vars, Variable* args )
{
    Action* a = ctx->m_Tree->LookupAction( id );
	if( !a )
	{
    	a = new Action;
    	InitAction( a );
    	a->m_Id = id;
		a->m_Args = args;
		a->m_Vars = vars;	
	    a->m_Declared = true;
	    ctx->m_Tree->RegisterAction( a );
    }
	else if( a && !a->m_Declared )
    {
    	a->m_Id = id;
    	a->m_Args = args;
    	a->m_Vars = vars;
    	a->m_Declared = true;
	}
    else if( a && a->m_Declared )
    {
    	DeleteVariableList( vars );
    	DeleteVariableList( args );
    	
        char tmp[2048];
        sprintf( tmp, "action \"%s\" was previously declared on line %d.\n", id.m_Text, a->m_Id.m_Line );
        yyerror( ctx, ctx->yyscanner, tmp );
        return false;
    }
    return true;
}

bool DeclareDecorator( ParserContext* ctx, const Identifier& id, Variable* vars, Variable* args )
{
    Decorator* d = ctx->m_Tree->LookupDecorator( id );
	if( !d )
	{
    	d = new Decorator;
    	InitDecorator( d );
    	d->m_Id = id;
		d->m_Args = args;
		d->m_Vars = vars;	
	    d->m_Declared = true;
	    ctx->m_Tree->RegisterDecorator( d );
    }
	else if( d && !d->m_Declared )
    {
    	d->m_Id = id;
    	d->m_Args = args;
    	d->m_Vars = vars;
    	d->m_Declared = true;
	}
    else if( d && d->m_Declared )
    {
    	DeleteVariableList( vars );
    	DeleteVariableList( args );
    	
        char tmp[2048];
        sprintf( tmp, "Decorator \"%s\" was previously declared on line %d.\n", id.m_Text, d->m_Id.m_Line );
        yyerror( ctx, ctx->yyscanner, tmp );
        return false;
    }
    return true;
}

bool DeclareNode( ParserContext* ctx, const Identifier& id, NodeGrist* grist )
{
	Node* n = ctx->m_Tree->LookupNode( id );
	if( !n )
	{
		n = new Node;
		InitNode( n );
		n->m_Id = id;
		n->m_Grist = grist;
		n->m_Declared = true;
		ctx->m_Tree->RegisterNode( n );
	}
	else if( n && !n->m_Declared )
	{
		n->m_Id = id;
		n->m_Grist = grist;
		n->m_Declared = true;
	}
	else if( n && n->m_Declared )
	{
		char tmp[2048];
		sprintf( tmp, "Node \"%s\" was previously declared on line %d.\n", id.m_Text, n->m_Id.m_Line );
		yyerror( ctx, ctx->yyscanner, tmp );
		return false;
	}
	return true;
}

