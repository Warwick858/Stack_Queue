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

#include "Queue.h"

Queue::Queue()
{
	front = nullptr;
	rear = nullptr;
} // end constructor

Queue::~Queue()
{
	//Save front as Node p
	Node* p = front;
	//While p is not null
	while (p != nullptr)
	{
		//Get the next node of p and save as Node pnext
		Node* pnext = p->getNext();
		//Remove p from list
		delete p;
		p = pnext;
	} // end while
} // end destructor

void Queue::append(Node* _node)
{
	//If queue is empty
	if (empty() == 0)
	{
		front = _node;
		rear = _node;
	} // end if
	else // if queue is not empty
	{
		//Append the _node behind the rear
		rear->setNext(_node);
		//Set _node as rear
		rear = _node;
	} // end else
} // end function push()

Node* Queue::serve()
{
	//If queue is NOT empty
	if (empty() != 0)
	{
		//Save the front node
		Node* saveFront = front;
		//Set the next node as front
		front = front->getNext();

		return saveFront;
	} // end if
	else // if queue is empty
	{
		return nullptr;
	} // end else
} // end function pop()

int Queue::empty()
{
	if (front != nullptr) // if queue is not empty
		return 1;
	else			   // queue is empty
		return 0;
} // end function empty()

Node* Queue::getFront() const
{
	return front;
} // end function getTop