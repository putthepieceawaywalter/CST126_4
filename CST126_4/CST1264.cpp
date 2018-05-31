// CST1264.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "term.h"


int main()
{

	// I used the flowers.cpp file from the google drive to help make this program
	const int SIZE = 10;
	std::string my_terms[SIZE] =
	{
		"Epic", "Facilitation", "Iteration", "Scrum Master", "Refactoring", "Scrum",
		"Team", "Story Mapping", "Pair Programming", "Mob Programming"
	};



	// 1. make a struct
	// 2. make a linked list of those struts
	// 3. hard code the dictionary into the main program
	// flowers.cpp which is saved on your desktop is a good place to start with how this program is supposed to work.
	// 
	linkMe * linkedList = new linkMe();

	// send all of the data in the object to the linkedList add function
	// use string a = termArray[i].getName(); a[0] compared to word in the linked list[0]


	for (int i = 0; i < SIZE; i++)
	{
		linkedList->add(my_terms[i]);
	}

	linkedList->print();
	term epic;
	epic.setTerm("Epic");
	epic.setDefinition("An epic is a large user story.");
	epic.setYear(0);

	std::cout << epic.name << " " << epic.definition << " " << epic.year;

    return 0;
}

