#ifndef _PERSON_H
#define _PERSON_H

#include <string>
using std::string;

struct Person{
	const string& getname()const{ return name; };
	const string& getaddress()const{ return address; };

	string name;
	string address;
};

#endif