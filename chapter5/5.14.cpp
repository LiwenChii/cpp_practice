#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string max_repeat_str;
	int max_repeat_times = 0;
	string buffer;
	string prestr;
	int repeat_times = 1;
	while (cin >> buffer)
	{
		if (buffer == prestr)
		{
			++repeat_times;
		}
		else
		{
			repeat_times = 1;
		}

		if (repeat_times > max_repeat_times)
		{
			max_repeat_str = buffer;
			max_repeat_times = repeat_times;
		}
		prestr = buffer;
	}

	cout << "str: " << max_repeat_str << " repeats " << max_repeat_times <<" times" << endl;

}