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

typedef struct destination{   //��ʾ������������ʲô
	int id;
	string message;

	destination(int i, string m) :id(i), message(m){}
}destination;

struct connection{   //ʹ�������������Ϣ
	bool is_connected;
	destination& dest;

	connection(destination &d) : dest(d){}

};

connection connect(destination *dest) //������
{
	connection new_connection = connection(*dest);
	new_connection.is_connected = true;
	return new_connection;
}

void disconnect(connection* p) //�رո���������
{
	p->is_connected = false;

}

void end_connection(connection *p)
{
	disconnect(p);
}

void f(destination &d)
{
	//���һ�����ӣ��ǵ�ʹ�����ر���
	connection c = connect(&d);
	//ʹ������
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