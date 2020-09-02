#pragma once
#include "object.h"

class Square :public Object
{
    int a;

public:
    Square(int=0);
    ~Square();
    void  pole();
};