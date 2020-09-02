#include <iostream>
#include <math.h>
#include "circle.h"
#include "pkt.h"

Circle::Circle(int r, int x, int y) : r(r), Pkt(x, y) {}

Circle::~Circle() {}

int Circle::get_r(){
    return r;
}

float Circle::get_square_area(){
    //std::cout << "X: " << Pkt::getX() << std::endl;
    //std::cout << "Y: " <<Pkt::getY() << std::endl;
    return PI * pow(r,2);
}