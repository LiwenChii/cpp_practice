#include <string>
#include <iostream>
#include <vector>
#include <initializer_list>

using namespace::std;

class StrBlob
{
public:
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string> ilstr);
	size_type size() const{ return data->size(); }

private:
	
};