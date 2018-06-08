// CST1264.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "term.h"
#pragma once


// I used the flowers.cpp for the list linking function and the print function (found on the cst126
// google drive)

// I used pragma once to ensure that my program is only compiled once
// Below is wikipedia's definition of pragma once.  It seemed smarter to reference a more technical source than
// to put in my own definition. (for what its worth though pragma once will ensure that a source file is included only once
// in compilation and will have several advantages listed below)


// In the C and C++ programming languages, #pragma once is a non-standard but widely
// supported preprocessor directive designed to cause the current source file to be 
// included only once in a single compilation. Thus, #pragma once serves the same 
// purpose as #include guards, but with several advantages,
// including: less code, avoiding name clashes, and improved compile speed.


int main()
{
	term epic = { "Epic", "epics are long stories", 2004 };
	term timebox = {"Timebox", "A timebox is an agreed on period of time when a team works towards a goal.", 1988};
	term iteration = { "Iteration", "An iteration is a timebox during which development takes place." , 1991 };
	term kanban = { "Kanban", "The Kanban Method is a means to design, manage, and improve flow systems for knowledge work. " , 2004 };
	term refactoring = { "Refactoring", "Refactoring consists of improving the program's code while maintaining its behavior", 1984 };
	term scrum = { "Scrum", "Scrum is a process framework used to manage product development and other knowledge work." , 1986 };
	term team = { "Team", "A team in Agile is a small group of people assigned to the same project or effort.", 2004 };
	term story_mapping = { "Story Mapping",  "Story mapping consists of ordering user stories along two independent dimensions" , 2005 };
	term pair_programming = { "Pair Programming",  "Pair programming consists of two programmers sharing a single workstation." , 1992 };
	term mob_programming = { "Mob Programming", "Where the whole team works on the same thing at the same time in the same place." , 2011 };

	
	const int SIZE = 10;
	term termArray[SIZE] = { epic, timebox, iteration, kanban, refactoring, scrum,
		team, story_mapping, pair_programming, mob_programming };

	linkMe * linkedList = new linkMe();

	for (int i = 0; i < SIZE; i++)
	{
		linkedList->add(termArray[i]);
	}

	linkedList->print();
	
	search(linkedList);

	linkedList->ruinerOfAllThings();
	
    return 0;
}
