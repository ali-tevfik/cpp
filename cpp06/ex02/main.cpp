#include "Class.hpp"

Base * generate(void)
{
	std::srand(std::time(NULL));
	int random = std::rand();
	if (random % 3 == 0)
		return new A();
	if (random % 3 == 1)
		return new B();
	else
		return new C();
}


void identify(Base* p)
{
	std::cout << "\n\033[36m****  Pointer Dynamic Cast *****\033[0m" << std::endl;
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "It's A" << std::endl;
	else
		std::cout << "Not A" << std::endl;
	if (b)
		std::cout << "It's B" << std::endl;
	else
		std::cout << "Not B" << std::endl;
	if (c)
		std::cout << "It's C" << std::endl;
	else
		std::cout << "Not C" << std::endl;
	std::cout << "\033[36m*********************************\033[0m\n" << std::endl;
}

void identify(Base& p)
{
	std::cout << "\n\033[35m****  Reference Dynamic Cast ****\033[0m" << std::endl;
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "It's A" << std::endl;
	}
	catch (const std::exception& exception)
	{
		std::cerr << "Not A"  << std::endl;
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "It's B" << std::endl;
	}
	catch (const std::exception& exception)
	{
		std::cerr << "Not B"  << std::endl;
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "It's C" << std::endl;
	}
	catch (const std::exception& exception)
	{
		std::cerr << "Not C"  << std::endl;
	}
	std::cout << "\033[35m*********************************\033[0m\n" << std::endl;
}

int main(void)
{
	Base *base = generate();
    if (base)
        std::cout << "Base is generated." << std::endl;
    if (base) {
        std::cout << "Base* p is pointing to ";
        identify(base);
        std::cout << "Base& p is pointing to ";
        identify(base);
    }
    delete base;
}
