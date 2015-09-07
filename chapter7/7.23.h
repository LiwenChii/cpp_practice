#ifndef EXER_7_23
#define EXER_7_23

#include <iostream>
#include <string>

class Screen{
public:
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos h, pos w, char c) :ht(h), wd(w), contents(h*w, c){}
	char get()const{ return contents[cursor]; }
	char get(pos r, pos c)const{ return contents[wd*r + c]; }
private:
	pos cursor = 0;
	pos ht = 0;
	pos wd = 0;
	std::string contents;
};



#endif