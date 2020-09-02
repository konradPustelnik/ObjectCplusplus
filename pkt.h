#pragma once

class Pkt
{
    int x, y;

public:
    Pkt(int=0, int=0);
    ~Pkt();

    int getX();
    int getY();
};