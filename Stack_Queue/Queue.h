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

#pragma once
#include "Node.h"

class Queue
{

private:

	Node* front;
	Node* rear;

public:

	//The Default Constructor
	//Purpose: To initialize data members to null or zero
	//Parameters: None
	//Return: None
	Queue();

	//The Destructor
	//Purpose: To clean up dynamically allocated memory
	//Parameters: None
	//Return: None
	~Queue();

	//The append function
	//Purpose: To append the given node to the back of the queue
	//Parameters: A Node* represented as _node
	//Return: None
	void append(Node* _node);

	//The serve function
	//Purpose: To remove the node from the front of the queue
	//Parameters: None
	//Return: front in the form of a Node*
	Node* serve();

	//The empty function
	//Purpose: To check if the queue is empty
	//Parameters: None
	//Return: A return code in the form of an int, 0 = true, 1 = false
	int empty();

	//The getFront function
	//Purpose: To return the front node of the queue
	//Parameters: None
	//Return: front in the form of a Node*
	Node* getFront() const;
};

