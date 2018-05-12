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

class Stack
{
private:

	Node* top;

public:

	//The Default Constructor
	//Purpose: To initialize data members to null or zero
	//Parameters: None
	//Return: None
	Stack();

	//The Destructor
	//Purpose: To clean up dynamically allocated memory
	//Parameters: None
	//Return: None
	~Stack();

	//The push function
	//Purpose: To push the given node onto the top of the stack
	//Parameters: A Node* represented as _node
	//Return: None
	void push(Node* _node);

	//The pop function
	//Purpose: To remove the node off the top of the stack
	//Parameters: None
	//Return: top in the form of a Node*
	Node* pop();

	//The empty function
	//Purpose: To check if the stack is empty
	//Parameters: None
	//Return: A return code in the form of an int, 0 = true, 1 = false
	int empty();

	//The getTop function
	//Purpose: To return the top node of the stack
	//Parameters: None
	//Return: top in the form of a Node*
	Node* getTop() const;
};

