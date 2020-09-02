#include <iostream>
#include "pkt.h"

Pkt::Pkt(int X, int Y) : x(X), y(Y) {}

Pkt::~Pkt() {}

int Pkt::getX(){
    return x;
}

int Pkt::getY(){
    return y;
}