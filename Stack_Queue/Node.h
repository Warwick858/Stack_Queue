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
using namespace std;

class Node
{
private:

	Node* next;
	int data;

public:

	//The Default Constructor
	//Purpose: To initialize data members to null or zero
	//Parameters: None
	//Return: None
	Node();

	//The Parameterized Constructor
	//Purpose: To initialize data members to given parameters
	//Parameters: An int represented as _number
	//Return: None
	Node(int _number);

	//The Destructor
	//Purpose: To clean up dynamically allocated memory
	//Parameters: None
	//Return: None
	~Node();

	//The getNext function
	//Purpose: To return the value of next
	//Parameters: None
	//Return: next in the form of a Node*
	Node* getNext() const;

	//The getData function
	//Purpose: To return the value of data
	//Parameters: None
	//Return: data in the form of an int
	int getData() const;

	//The setNext function
	//Purpose: To set the value of next in the Node class
	//Parameters: A Node* represented as _node
	//Return: None
	void setNext(Node* _node);

	//The setData function
	//Purpose: To set the value of data in the Node class
	//Parameters: An int represented as _number
	//Return: None
	void setData(int _number);
};
