/*
 *
 * Copyright (C) 2009, Joacim Jacobsson ( j dot jacobsson at gmail dot com )
 * All rights reserved.
 *
 * See LICENSE file for details
 *
 */

#include "../code/bt_program.h"
#include <btree/btree.h>

#include <algorithm>

using namespace callback;
/*
VariableOwner::VariableOwner()
    : m_Variables( 0x0 )
    , m_bssStart( 0 )
{
}

VariableOwner::~VariableOwner()
{
	DeleteVariableList( m_Variables );
}

void VariableOwner::StoreVariablesInDataSection( BehaviourTree* bt, Variable* dec )
{
	if( !m_Variables || !dec )
        return;

    m_Data.clear();
    m_bssStart = bt->GetBSSSection().Push( sizeof(void*) * CountElementsInList( dec ), sizeof(void*) );

    DataSection& d = bt->GetDataSection();
    Variable* it;
    for( it = dec; it != 0x0; it = it->m_Next )
    {
    	Variable* v = FindVariableWithIdHash( m_Variables, it->m_Id.m_Hash );

        switch( it->m_Type )
        {
        case E_VART_INTEGER:
            m_Data.push_back( d.PushInteger( ValueAsInteger(*v) ) );
            break;
        case E_VART_FLOAT:
            m_Data.push_back( d.PushFloat( ValueAsFloat(*v) ) );
            break;
        case E_VART_STRING:
            m_Data.push_back( d.PushString( ValueAsString(*v) ) );
            break;
        case E_VART_BOOL:
            m_Data.push_back( d.PushInteger( ValueAsInteger(*v) ) );
            break;
        default:
            //assert( false );
            break;
        }
    }

}

void VariableOwner::GenerateVariableInstructions( BehaviourTree* bt )
{
    std::vector<int>::iterator it, it_e( m_Data.end() );
    int i = 0;
    for( it = m_Data.begin(); it != it_e; ++it, ++i )
    {
        //Store a pointer to a variable in the data section in the bss section.
        bt->GetCodeSection().Push( INST_STORE_PD_IN_B, m_bssStart + (sizeof(void*) * i), *it, 0 );
    }
}

void VariableOwner::SetupVariableRegistry( BehaviourTree* bt )
{
    if( !m_Data.empty() )
    {
        // Load the user data register with a pointer to the bss structure for variables
        bt->GetCodeSection().Push( INST_STORE_PB_IN_R, 2, m_bssStart, 0 );
    }
    else
    {
        //Load the user data register with a null pointer
        bt->GetCodeSection().Push( INST_LOAD_REGISTRY, 2, 0, 0 );
    }
}

void VariableOwner::SetVariableList( Variable* variables )
{
    m_Variables = variables;
}

Variable* VariableOwner::GetVariableList()
{
    return m_Variables;
}
*/