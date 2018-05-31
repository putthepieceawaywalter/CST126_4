#include "stdafx.h"
#include <iostream>
#include "term.h"

void buildMyArray(term termArray[])
{

	// change this from an array to 10 named objects!
	termArray[0].name = "Epic";
	termArray[0].definition = "An epic is a large user story.";
	termArray[0].year = 0; // fill in with correct year

	termArray[1].name = "Facilitation";
	termArray[1].definition = "A facilitator is a person who is given the role of conducting the meeting.";
	termArray[1].year = 0; // fill in with correct year

	termArray[2].name = "Iteration";
	termArray[2].definition = "An iteration is a timebox during which development takes place.";
	termArray[2].year = 0; // fill in with correct year

	termArray[3].name = "Scrum Master";
	termArray[3].definition = "The scrum master is responsible for ensuring the team lives agile values and principles.";
	termArray[3].year = 0; // fill in with correct year later

	termArray[4].name = "Refactoring";
	termArray[4].definition = "Refactoring consists of improving the program's code while maintaining its behavior";
	termArray[4].year = 0; // fill in with correct year

	termArray[5].name = "Scrum";
	termArray[5].definition = "Scrum is a process framework used to manage product development and other knowledge work.";
	termArray[5].year = 0; // fill in with correct year

	termArray[6].name = "Team";
	termArray[6].definition = "A team in Agile is a small group of people assigned to the same project or effort.";
	termArray[6].year = 0; // fill in with correct year

	termArray[7].name = "Story Mapping";
	termArray[7].definition = "Story mapping consists of ordering user stories along two independent dimensions";
	termArray[7].year = 0; // fill in with correct year

	termArray[8].name = "Pair Programming";
	termArray[8].definition = "Pair programming consists of two programmers sharing a single workstation.";
	termArray[8].year = 0; // fill in with correct year

	termArray[9].name = "Mob Programming";
	termArray[9].definition = "Where the whole team works on the same thing at the same time in the same place.";
	termArray[9].year = 0; // fill in with correct year


}


// I could also hardcode individual objects an example of how that would look is below
//term Epic;
//Epic.name = "Epic";
//Epic.definition = "An epic is a long user story";
//Epic.year = 0;





void linkMe::add(std::string name)
{
	term * node = new term();
	node->name = name;
	listLength++;

	std::cout << "inserting " << node->name << std::endl;

	// this is the if statement for the first word that is added
	if (head == nullptr)
	{
		head = node;
	}


	else
	{
		if (name < head->name)
		{
			node->next = head;
			head = node;
		}

		else
		{
			term * temp = head;
			term * prev = nullptr;
			while (temp != nullptr && (name > temp->name))
			{
				prev = temp;
				temp = temp->next;
			}
			prev->next = node;
			node->next = temp;
		}
	}

	// 3 possible if statements
		// if the word it is inserting goes at the head of the list
			// if the first letter of the input word is < the first letter of my_terms[i] 
				// next = head; head = input word;



		// if the word that is being inserted goes in the middle of the list
			// while the first letter of the input word is > the first letter of my_terms[i] 
			// advance to the next array until it finds a node where the first letter is > than
			// the first letter of the input word
			// once it finds where in the list it goes it should adjust the "next" of the preceding
			// word to point  towards the input word, the next of the input word gets the 
			// subsequent word

		// if the words that is being insterted goes at the end of the list
			// (if the function iterates through the list until next == nullptr;
			// next of the current last word in the list points to the input word
			// the next of the input word = nullptr 
	// The words need to be sorted alphabetically
	
	// is there a function for testing alphabetical??




}





void linkMe::print() {
	term * head = this->head;
	int i = 1;
	while (head) {
		std::cout << i << ": " << head->name << std::endl;
		head = head->next;
		i++;
	}
	std::cout << std::endl;
}



