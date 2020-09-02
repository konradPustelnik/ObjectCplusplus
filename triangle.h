#pragma once
#include "object.h"

class Triangle :public Object
{
    int a, h;

public:
    Triangle(int=1, int=1);
    ~Triangle();

    void pole();
};