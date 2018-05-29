#include "stdafx.h"
#include <string>

// I need to add something to do with ifndef or pragma once to make sure the program compiles only once




struct term


{
public:
	// functions
	term()
	{
		definition = "";
		name = "";
		year = 0;
		next = nullptr;
	}

	// constructor with all 3 data types



	bool isMatch(std::string input)
	{
		if (name == input)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

//private:
	std::string definition;
	std::string name;
	int year;
	term * next;
	// pointer to the next term

};

// create a second class that contains a 
class linkMe
{
public:
	void add(std::string name);
	void print();
	// functions
	// default constructor
	// delete function (deletes the list)
	// add method that adds the list in order
	// a function that calls the print function in the term struct
	// a function that finds a term by name and then prints it

private:
	// data
	int listLength;
	term * head;
};

void buildMyArray(term termArray[]);





