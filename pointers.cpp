#include <iostream>

int main()
{
	int number = 240;		//define an int variable
	int *numPtr, num;       //numPtr is a pointer, num is integer
    numPtr = nullptr;			//define an integer pointer numPtr
	std::cout << "The address of number are: " << numPtr << " (NULL) and " << &number << std::endl;

    typedef int * int_ptr;
    int_ptr a, b;
	a = &number;		//assign the address to a
	b = &number;		//assign the address to b

	std::cout << "The address of number are: " << a << " and " << b<< std::endl;

	numPtr = &number;		//assign the address to numPtr
	std::cout << "The address of number are: " << numPtr << " " << &number << std::endl;

    std::cout << "The value of number are: " << *numPtr << " (dereference) and " << number << std::endl;


    return 0;
}

