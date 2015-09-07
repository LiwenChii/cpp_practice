#ifndef _PERSON_H
#define _PERSON_H

#include <string>
#include <iostream>
using std::istream;
using std::ostream;
using std::string;

struct Person{
	Person(const string &n, const string &a) :name(n), address(a){};
	Person(const string &n) :name(n){};
	Person() = default;

	const string& getname()const{ return name; };
	const string& getaddress()const{ return address; };

	string name;
	string address;
};

istream& read(istream &is, Person &person)
{
	is >> person.name >> person.address;
	return is;
}

ostream& print(ostream &os, const Person &person)
{
	os << person.name << " " << person.address << std::endl;
	return os;
}

#endif