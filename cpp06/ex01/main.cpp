#include "data.hpp"

Data* deserialize(uintptr_t  raw)
{
	return reinterpret_cast<Data*>(raw);
}

uintptr_t serialize(Data* ptr)
{
    	return reinterpret_cast<uintptr_t>(ptr);
}

int main()
{
    Data* example = new Data;
	uintptr_t intPtr;
	Data* dataPtr;

	example->str = "XXXXXX";
	intPtr = serialize(example);
	dataPtr = deserialize(intPtr);
	std::cout << "Address example: " << example << std::endl;
	std::cout << "Address dataPtr: " << dataPtr << std::endl;
	if ( example == dataPtr )
		std::cout << "Successful serialize/deserialize" << std::endl;
    else   
        std::cout << "Unsuccesful serialize/deserialize" << std::endl;
	std::cout << "example str: " << example->str << std::endl;
	std::cout << "dataPtr str: " << dataPtr->str << std::endl;
	delete example;
}