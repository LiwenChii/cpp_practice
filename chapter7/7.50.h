#ifndef EXER_7_22_H
#define EXER_7_22_H
#include <iostream>
#include <string>
using std::string;
using std::istream;
using std::ostream;

class Person{
	friend istream& read(istream& is, Person& man);
	friend ostream& print(ostream& os, const Person& man);
public:
	string get_name()const{ return name; }
	string get_address()const{ return address; }
	Person() = default;
	Person(const string& n, const string &a) :name(n), address(a){}
	explicit Person(const string& n) :name(n){}

private:
	string name;
	string address;
};

istream& read(istream& is, Person& man);
ostream& print(ostream& os, const Person& man);

istream& read(istream& is, Person& man)
{
	is >> man.name >> man.address;
	return is;
}

ostream& print(ostream& os, const Person& man)
{
	os << man.name << " " << man.address << std::endl;
	return os;
}

#endif