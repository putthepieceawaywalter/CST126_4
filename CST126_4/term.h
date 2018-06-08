#include "stdafx.h"
#include <string>
#pragma once

class term
{
public:
	term()
	{
		definition = "";
		name = "";
		year = '\0';
		next = nullptr;
	}

	term(std::string input_name, std::string input_definition, int input_year)
	{	
		
		name = input_name;
		definition = input_definition;
	
		year = input_year;
		next = nullptr;
		std::cout << year;
	}
	term * next;

	std::string getTerm() { return name; }
	std::string getDefinition() { return definition; }
	int getYear() { return year; }
	void setTerm(std::string a) { name = a; }
	void setDefinition(std::string a) { definition = a; }
	void setYear(int a) { year = a; }
	term * getPointer() { return next; }
private:
	std::string definition;
	std::string name;
	int year;
	

};

class linkMe
{
public:
	void add(term termArray);
	void print();
	void isMatch(std::string);
	void matchSuccess(term * object);
	void ruinerOfAllThings();

private:
	int listLength;
	term * head;

};
const int SIZE = 10;
std::string makeLower(std::string);
void search(linkMe * linkedList);
