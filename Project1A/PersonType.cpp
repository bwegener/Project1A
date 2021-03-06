/*
Li, Gellert & Wegener, Brian
Team...

CS A250
February 21, 2018

Project 1 (Part A): PersonType Class
*/

#include "PersonType.h"

PersonType::PersonType()
{
	socialSecurity = 0;
}

PersonType::PersonType(const string &newFirstName, const string &newLastName, int newSocialSecurity)
{
	firstName = newFirstName;
	lastName = newLastName;
	socialSecurity = newSocialSecurity;
}

void PersonType::setPersonInfo(const string& newFirstName, const string& newLastName, int newSocialSecurity)
{
	firstName = newFirstName;
	lastName = newLastName;
	socialSecurity = newSocialSecurity;
}

string PersonType::getFirstName() const
{
	return firstName;
}

string PersonType::getLastName() const
{
	return lastName;
}

int PersonType::getSSN() const
{
	return socialSecurity;
}

void PersonType::printName() const
{
	cout << lastName << ", " << firstName;
}

void PersonType::printPersonInfo() const
{
	printSSN();
	cout << socialSecurity << " " << firstName << " " << lastName;
}

// Work on later
string PersonType::printSSN() const
{
	
}

PersonType::~PersonType() {}
