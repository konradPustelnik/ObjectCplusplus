#include <iostream>
#include "triangle.h"

Triangle::Triangle(int a, int h) : a(a), h(h) {}

Triangle::~Triangle(){}

void Triangle::pole()
{
    std::cout << "Pole trójkąta: " << a*h/2 << std::endl;
}