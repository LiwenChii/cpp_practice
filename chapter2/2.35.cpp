#include <iostream>
#include <typeinfo>

void get_the_type(void);

int main()
{	
	get_the_type();
	return 0;
}

void get_the_type(void)
{
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;

	std::cout << "the type of j is " << typeid(j).name() << std::endl;
	std::cout << "the type of k is " << typeid(k).name() << std::endl;
	std::cout << "the type of p is " << typeid(p).name() << std::endl;
	std::cout << "the type of j2 is " << typeid(j2).name() << std::endl;
	std::cout << "the type of k2 is " << typeid(k2).name() << std::endl;

}