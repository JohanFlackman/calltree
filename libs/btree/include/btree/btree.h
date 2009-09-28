/*
 *
 * Copyright (C) 2009, Joacim Jacobsson ( j dot jacobsson at gmail dot com )
 * All rights reserved.
 *
 * See LICENSE file for details
 *
 */

#ifndef BTREE_HEADER_INCLUDED
#define BTREE_HEADER_INCLUDED

#include <stdio.h>

#include "btree_data.h"
#include "btree_func.h"

class BehaviourTreeImpl;

struct ParseFile;
struct ParserContext;
struct SPreProcessScope;

class CodeSection;
class BSSSection;
class DataSection; 

class BehaviourTree
{
public:

    typedef const Node* const *      const_node_iterator;
    typedef const Action* const *    const_action_iterator;
    typedef const Decorator* const * const_decorator_iterator;

    BehaviourTree();
    ~BehaviourTree();

    const_node_iterator NodeBegin() const;
    const_node_iterator NodeEnd() const;

    const_action_iterator ActionBegin() const;
    const_action_iterator ActionEnd() const;

    const_decorator_iterator DecoratorBegin() const;
    const_decorator_iterator DecoratorEnd() const;

    CodeSection& GetCodeSection();
    DataSection& GetDataSection();
    BSSSection& GetBSSSection();

    void SetRootNode( Node* n );

    const char* RegisterString( const char* str );
    const char* RegisterString( const char* str, hash_t hash );

    Node* LookupNode( const Identifier& );
    Node* CreateNode( const Identifier& );
    void FreeNode( Node* );

    Action* LookupAction( const Identifier& );
    bool RegisterAction( Action* );
    void UnregisterAction( const Identifier& );

    Decorator* LookupDecorator( const Identifier& );
    bool RegisterDecorator( Decorator* );
    void UnregisterDecorator( const Identifier& );

    NodeList* CreateNodeList();
    void FreeNodeList( NodeList* );

    NodeGrist* CreateNodeGrist( int grist_type );
    void FreeNodeGrist( NodeGrist* grist );

    ParseFile* CreateParseFile();
    void FreeParseFile( ParseFile* pf );

    bool IsDefined( const char* );
    void Define( const char* );
    void Undefine( const char* );

    void SetGenerateDebugInfo( bool debug_info_on );

    void Generate();
    void Print( FILE* outFile );
    bool Save( FILE* outFile, bool swapEndian ) const;

    int Parse( const char* filename );

    void Error( ParserContext*, int lineno, const char* msg );
    void Warning( ParserContext*, int lineno, const char* msg );

    void Visit( INodeVisitor* nv );

    Node*              m_Root;
    BehaviourTreeImpl* m_Impl;
};


class INodeVisitor
{
public:
	~INodeVisitor() {}

	virtual void Visit( Node* n ) = 0;

};


#endif /*BTREE_HEADER_INCLUDED*/
