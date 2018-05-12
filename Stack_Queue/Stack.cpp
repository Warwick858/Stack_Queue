// ******************************************************************************************************************
//  Stack & Queue - custom built stack and queue.
//  Copyright(C) 2018  James LoForti
//  Contact Info: jamesloforti@gmail.com
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.If not, see<https://www.gnu.org/licenses/>.
//									     ____.           .____             _____  _______   
//									    |    |           |    |    ____   /  |  | \   _  \  
//									    |    |   ______  |    |   /  _ \ /   |  |_/  /_\  \ 
//									/\__|    |  /_____/  |    |__(  <_> )    ^   /\  \_/   \
//									\________|           |_______ \____/\____   |  \_____  /
//									                             \/          |__|        \/ 
//
// ******************************************************************************************************************
//

#include "Stack.h"

Stack::Stack()
{
	top = nullptr;
} // end constructor

Stack::~Stack()
{
	//Save top as Node p
	Node* p = top;
	//While p is not null
	while (p != nullptr)
	{
		//Get the next node of p and save as Node pnext
		Node* pnext = p->getNext();
		//Remove p from list
		delete p;
		p = pnext;
	} // end while
} // end deconstructor

void Stack::push(Node* _node)
{
	//If stack is empty
	if (empty() == 0)
	{
		top = _node;
	} // end if
	else // if stack is not empty
	{
		//Push the top node back
		_node->setNext(top);
		//Set node as top
		top = _node;
	} // end else
} // end function push()

Node* Stack::pop()
{
	//If stack is NOT empty
	if (empty() != 0)
	{
		//Save the top node
		Node* saveTop = top;
		//Set the next node as top
		top = top->getNext();

		return saveTop;
	} // end if
	else // if stack is empty
	{
		return nullptr;
	} // end else
} // end function pop()

int Stack::empty()
{
	if (top != nullptr) // if stack is not empty
		return 1;
	else			   // stack is empty
		return 0;
} // end function empty()

Node* Stack::getTop() const
{
	return top;
} // end function getTop
