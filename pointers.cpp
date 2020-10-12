#include <iostream>

void pointers()
{
    int number = 240;		//define an int variable
    int *pNum, num;       //pNum is a pointer, num is integer
    pNum = nullptr;			//define an integer pointer pNum
    std::cout << "The address of number are: " << pNum << " (NULL) and " << &number << std::endl;

    typedef int * int_ptr;
    int_ptr a, b;
    a = &number;		//assign the address to a
    b = &number;		//assign the address to b

    std::cout << "The address of number are: " << a << " and " << b << std::endl;

    pNum = &number;		//assign the address to pNum
    std::cout << "The address of number are: " << pNum << " " << &number << std::endl;

    std::cout << "The value of number are: " << *pNum << " (dereference) and " << number << std::endl;
}

void sizeOfPointers()
{
    std::cout << "Size of boolean: " << sizeof(bool) << std::endl;
    std::cout << "Size of int: " << sizeof(int) << std::endl;

    //pointers have always 4 bytes
    bool *pBool;
    int *pInt;
    std::cout << "Size of boolean ptr: " << sizeof(pBool) << std::endl;
    std::cout << "Size of int ptr: " << sizeof(pInt) << std::endl;

}

void pointersToArrays()
{
    double dValues[10];
    int IValues[10];
    double *pDValues = dValues; //don't need to add & char
    int *pIValues = IValues;
    std::cout << dValues << " " << pDValues << std::endl;
    for (int i=0; i<10; i++)
    {
        std::cout << "Address of double: " << pDValues + i << std::endl; //8 bytes
        std::cout << "Address of integer:" << IValues + i << std::endl; //4 bytes
    }

}

void characterPointer()
{
    char initial = 'A';
    char *pInitial = &initial;
    std::cout << "Memory address for initial A is: " << pInitial << " " << (void *)pInitial << " " << static_cast <void *>(pInitial) << std::endl;
}

void dereferencingPointers()
{
    double testScores[5], sum=0;
    double *pTestScores;
    pTestScores = testScores;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter the test score: " << std::endl;
        std::cin >> *(pTestScores + i);
        sum += *(pTestScores + i);
    }
    std::cout << "testScores: "<< testScores << std::endl;
    std::cout << "Total for all students: " << sum << std::endl;
    std::cout << "Average score: " << sum / 5 << std::endl;
}

void pointerToPointer()
{
    int testScores[5]{ 100,50,0,150,200};
    int *ptestScores[5];
    for (int i = 0; i < 5; i++)
    {
        ptestScores[i]=&(testScores[i]);
        std::cout << "testScores: "<< testScores[i] << " address: " << ptestScores[i] << std::endl;
        std::cout << "testScores: "<< *(ptestScores[i]) << " testScores: " << **(ptestScores + i) << std::endl;

    }
}
int main()
{
    pointers();
    sizeOfPointers();
    pointersToArrays();
    characterPointer();
    dereferencingPointers();
    pointerToPointer();


    return 0;
}

