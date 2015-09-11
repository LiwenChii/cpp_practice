#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int main()
{
    std::ifstream input("/home/liwen/桌面/data.txt");
    string buf;
    vector<string> vec;
    if(input)
    {
        while(std::getline(input, buf))
        {
            vec.push_back(buf);
        }
    
    }

    for(const auto &s: vec)
    {
        cout << s << " ";
    }

    return 0;
}
