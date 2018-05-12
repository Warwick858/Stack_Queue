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

#include <iostream>
#include <string>
#include <fstream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

//The print function
//Purpose: To print the value of the given Node
//Parameters: A Node* represented as _node
//Return: None
void print(Node* _node);

int main()
{
	//Declare Variables:
	string filePath = "";
	string command = "";
	string playAgain = "";
	string fileLine = "";

	//Print introduction
	cout << "Good day.  I believe your here to give me a file of commands and values. ";
	cout << "Let's do this. " << endl;

	//do-while for play again
	do
	{
		//Reset playAgain
		playAgain = "";

		//Prompt user for file path
		cout << "\nEnter the file path, followed by the file extension (ex: data.txt) " << endl;
		cout << "Or enter 'quit' to exit the program: " << endl;

		//Get user input
		cin >> filePath;

		//If user quits program
		if (filePath == "quit")
		{
			cout << "\nHave a good one! :) " << endl;
			cout << "Goodbye" << endl;
		} // end if
		else // if user continues
		{
			//Create input stream and open file
			ifstream inStream;
			inStream.open(filePath);

			//Ensure file open was good
			if (inStream.fail()) // if failed, exit
			{
				cout << "\nCould not open the file to read. " << endl;
				system("PAUSE");
				exit(1);
			} // end if

			//If file opened, continue
			if (inStream.good())
			{
				//Create stack and queue
				Stack stack;
				Queue queue;

				//Print headers
				cout << "\n\tOperation " << "\tStructure " << "\tValue " << "\t\tResult " << endl;

				//Read until end of file
				while (getline(inStream, fileLine))
				{
					//Declare helpers
					string command = "";
					string container = "";
					string result = "";
					string valueStr = "";
					int value = 0;

					//If value exists
					if (fileLine.find(" ") != -1) 
					{
						//Parse command and value from fileLine
						command = fileLine.substr(0, fileLine.find(" "));
						value = stoi(fileLine.substr(fileLine.find(" "), fileLine.length()));
					} // end if
					else // if value does NOT exist
					{
						//No value to find, just save command
						command = fileLine;
						valueStr = "----- ";
					} // end else

					//If command is push
					if (command == "push")
					{
						//Perform push, set result and container, convert value
						stack.push(new Node(value));
						result = "successful ";
						container = "stack ";
						valueStr = to_string(value);
					} // end if
					
					//If command is pop
					if (command == "pop")
					{ 
						//If stack is NOT empty
						if (stack.empty() != 0)
						{
							stack.pop();
							result = "successful ";
						} // end if
						else // stack was empty
							result = "underflow ";

						//Save container type
						container = "stack ";
					} // end for
					
					//if command is append
					if (command == "append")
					{
						//Perform append, set result and container, convert value
						queue.append(new Node(value));
						result = "successful ";
						container = "queue ";
						valueStr = to_string(value);
					} // end if
					
					//if command is serve
					if (command == "serve")
					{
						//If queue is NOT empty
						if (queue.empty() != 0)
						{
							queue.serve();
							result = "successful ";
						} // end if
						else // queue was empty
							result = "underflow ";

						//Save container type
						container = "queue ";
					} // end if
						
					//Print command info
					cout << "\t" + command << "\t\t" + container << "\t\t" + valueStr << "\t\t" + result << endl;
				} // end while

				//Close the file
				inStream.close();

				//Print program dialog
				cout << "\nHere's the data from my stack and my queue. " << endl;

				//Print headers and data
				cout << "\n\tStack: " << endl;
				print(stack.getTop());
				cout << "\n\tQueue: " << endl;
				print(queue.getFront());
			} // end if

			//Prompt user to play again
			cout << "\nWould you like to try another file? (Enter 'y' or 'n'): ";
			cin >> playAgain;
			
			//Check to make sure user entered y or n
			while (playAgain != "y" && playAgain != "n")
			{
				cout << "Invalid reponse. Please enter 'y' or 'n': ";
				cin >> playAgain;
			} // end while
			
		} // end else
	} while (playAgain == "y"); // repeat if user enters "y"

	system("PAUSE");
	return 0;
} // end function main()

void print(Node* _node)
{
	//Save _node as function variable
	Node* node = _node;
	
	//While data exists
	while (node != nullptr)
	{
		//Print the data of node
		cout << "\t" << node->getData() << endl;
		//Get the next node
		node = node->getNext();
	} // end while
} // end function print()
