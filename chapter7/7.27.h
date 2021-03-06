#ifndef EXER_7_27
#define EXER_7_27

#include <iostream>
#include <string>

class Screen{
public:
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos h, pos w, char c) :ht(h), wd(w),content(h*w, c){}
	char get()const{ return content[cursor]; }
	char get(pos r, pos c)const{ return content[r*wd + c]; }
	Screen& move(pos r, pos c){ cursor = r*wd + c; return *this; }
	Screen& set(char c){ content[cursor] = c; return *this; }
	Screen& set(pos r, pos c, char ch){ content[r*wd + c] = ch; return *this; }
	Screen& display(std::ostream &os){ do_display(os); return *this; }
	const Screen& display(std::ostream &os)const{ do_display(os); return *this; }
private:
	pos ht = 0;
	pos wd = 0;
	pos cursor = 0;
	std::string content;
	void do_display(std::ostream &os)const{ os << content; }
};


#endif