#include <iostream>
#include "math.h"
#include "square.h"

Square::Square(int a) : a(a) {};

Square::~Square() {};

void Square::pole()
{
    std::cout << "Pole kwadratu: " << pow(a,2) << std::endl;
}
