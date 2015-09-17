#include <string>
#include <vector>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Da{
public:
	Da(const string &str)
	{
		int state = 0;
		if (str.find_first_of("/") != string::npos)
		{
			state = 1;
		}
		else if (str.find_first_of(",") != string::npos)
		{
			state = 2;
		}
		else if (str.find_first_of(" ") != string::npos)
		{
			state = 3;
		}


		switch(state)
		{
		case 0:
			cout << "fail to initialize the object,incorrect format" << endl;
			break;
		case 1:
			{
				string::size_type p;
				string::size_type real_p;
				month = stoi(str.substr(0, str.find_first_of("/")), &p);
				real_p = p + 1;
				day = stoi(str.substr(real_p, str.find_first_of("/", real_p)), &p);
				real_p = p + real_p;
				year = stoi(str.substr(real_p + 1));
				cout << month << " " << day << " " << year << endl;
			}
			break;
		case 2:
			{
				  string::size_type p1 = 0;
				  string::size_type real_p1 = 0;

				  month = month_to_num(str.substr(0, str.find_first_of(" ")), &p1);
				  real_p1 = p1 + 1;
				  day = stoi(str.substr(real_p1, str.find_first_of("/", real_p1)), &p1);
				  real_p1 = p1 + real_p1;
				  year = stoi(str.substr(real_p1 + 1));
				  cout << month << " " << day << " " << year << endl;
			}
			break;
		case 3:
			{
				  string::size_type p1 = 0;
				  string::size_type real_p1 = 0;

				  month = simple_month_to_num(str.substr(0, str.find_first_of(" ")), &p1);
				  if (month == 0)
				  {
					  cout << "fail to initialize the object,incorrect format" << endl;
					  break;
				  }
				  real_p1 = p1 + 1;
				  day = stoi(str.substr(real_p1, str.find_first_of("/", real_p1)), &p1);
				  real_p1 = p1 + real_p1;
				  year = stoi(str.substr(real_p1 + 1));
				  cout << month << " " << day << " " << year << endl;
			}
			break;
		default:
			cout << "fail to initialize the object,incorrect format" << endl;
			break;

		}
	}

private:
	int month_to_num(string str,string::size_type *p)
	{
		vector<string> months = { "January", "February", "March", "April", "May",
			"June", "July", "August", "September", "October", "November", "December" };
		vector<string>::size_type pos = 0;
		for (; pos != months.size(); ++pos)
		{
			if (months[pos] == str)
			{
				*p = str.size();
				return pos + 1;
			}
		}
		return 0;
	}

	int simple_month_to_num(string str, string::size_type *p)
	{
		vector<string> months = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul"
			"Aug", "Sept", "Oct", "Nov", "Dec" };
		vector<string>::size_type pos = 0;
		for (; pos != months.size(); ++pos)
		{
			if (months[pos] == str)
			{
				*p = str.size();
				return pos + 1;
			}
		}
		return 0;
	}
	unsigned year;
	unsigned month;
	unsigned day;
};