#include <string>
#include <iostream>
#include <memory>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::shared_ptr;
using std::runtime_error;

typedef struct destination{   //表示我们正在连接什么
	int id;
	string message;

	destination(int i, string m) :id(i), message(m){}
}destination;

struct connection{   //使用连接所需的信息
	bool is_connected;
	destination& dest;

	connection(destination &d) : dest(d){}

};

connection connect(destination *dest) //打开连接
{
	connection new_connection = connection(*dest);
	new_connection.is_connected = true;
	return new_connection;
}

void disconnect(connection* p) //关闭给定的连接
{
	p->is_connected = false;

}

void end_connection(connection *p)
{
	disconnect(p);
}

void f(destination &d)
{
	//获得一个连接；记得使用完后关闭它
	connection c = connect(&d);
	//使用连接
	shared_ptr<connection> p(&c, end_connection);

	if (p->is_connected == false)
	{
		throw runtime_error("Something wrong with the connection...");
	}
	else
	{
		cout << "destination_id: " << p->dest.id << endl;
		cout << "statue: " << p->is_connected << endl;
		cout << "message_we_get: " << p->dest.message << endl;
	}

}

int main(void)
{
	int id = 1024;
	string message = string("hello");
	destination d = destination(id, message);
	try
	{
		f(d);
	}
	catch (runtime_error err)
	{
		cout << err.what() << endl;
		cout << "BAD LUCK!!" << endl;
	}
	return 0;
}