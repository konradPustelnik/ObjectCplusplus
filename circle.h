#pragma once
#include "pkt.h"

class Circle :public Pkt
{
    const float PI=3.14;
    int r;

public:
    Circle(int=2, int=1, int=1);
    ~Circle();

    int get_r();
    float get_square_area();
};