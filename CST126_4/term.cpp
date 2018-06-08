#include "stdafx.h"
#include <iostream>
#include "term.h"
#include <string>
#include <cctype>
#include <iomanip>
#pragma once



void linkMe::add(term object)
{
	term * node = new term();
	node->setTerm(object.getTerm());
	node->setDefinition(object.getDefinition());
	node->setYear(object.getYear());
	listLength++;
	std::cout << "inserting " << object.getTerm() << std::endl;

	if (head == nullptr)
	{
		head = node;
	}
	else
	{
		if (object.getTerm() < head->getTerm())
		{
			node->next = head;
			head = node;
		}

		else
		{
			term * temp = head;
			term * prev = nullptr;
			while (temp != nullptr && (object.getTerm() > temp->getTerm()))
			{
				prev = temp;
				temp = temp->next;
			}
			prev->next = node;
			node->next = temp;
		}
	}

}

void linkMe::ruinerOfAllThings()
{
	term * temp;
	term * head = this->head;
	while (head->next != nullptr)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
	delete head;
	std::cout << "list succesfully deleted" << std::endl;
}

void linkMe::isMatch(std::string input)
{

	term * matchCheck;
	matchCheck = head;
	std::string objectWord;
	objectWord = matchCheck->getTerm();
	objectWord = makeLower(objectWord);
	while (objectWord != input && matchCheck->next != nullptr)
	{
		matchCheck = matchCheck->next;
		objectWord = matchCheck->getTerm();
		objectWord = makeLower(objectWord);
		
	}
	if (objectWord == input)
	{
		matchSuccess(matchCheck);
	}
	else
	{
		std::cout << "There is no match in the dictionary for your word" << '\n' << std::endl;
	}

}

void linkMe::matchSuccess(term * object)
{
	std::cout  << object->getTerm() << "  definition: " << object->getDefinition() << '\n' << "First used: "
		<< object->getYear() << '\n';
}

void linkMe::print() {
	term * head = this->head;
	int i = 1;
	while (head) {
		std::cout << std::setw(15) << head->getTerm() << ": " << head->getDefinition() << std::endl;
		head = head->next;
		i++;
	}
	std::cout << std::endl;
}

std::string makeLower(std::string input)
{
	int i = 0;
	std::string apple;
	while (i < input.size())
	{
		apple += std::tolower(input[i]);
		i++;
	}
	return apple;
}

void search(linkMe * linkedList)
{	
	
	std::cout << "Enter the Agile programming term you'd like to search for" << std::endl;
	std::string input;
	std::getline(std::cin, input);
	input = makeLower(input);
	if (std::empty(input))
	{
		std::cout << '\n' << "You didn't enter anything!" << '\n';
		
	}
	else
	{
		linkedList->isMatch(input);
	}

	std::cout << '\n' << "Would you like to run the program again? Type y for yes or n for no" << std::endl;
	char a;
	std::cin >> a;
	if (a != 'n')
	{// I purposfully only coded a situation for when the user types in n to handle accidental 
		// typos, n exits, everything else runs the program again.
		std::cin.clear();
		std::cin.ignore();
		search(linkedList);
	}
}
