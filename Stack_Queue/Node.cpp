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

#include "Node.h"

Node::Node()
{
	next = nullptr;
	data = 0;
} // end constructor()

Node::Node(int _number)
{
	data = _number;
	next = nullptr;
} // end parameterized constructor()

Node::~Node()
{

} // end destructor()

Node* Node::getNext() const
{
	return next;
} // end function getNext()

int Node::getData() const
{
	return data;
} // end function getData()

void Node::setNext(Node* _node)
{
	next = _node;
} // end function setNext()

void Node::setData(int _number)
{
	data = _number;
} // end function setData()