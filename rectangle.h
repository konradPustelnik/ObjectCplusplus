#include "pkt.h"

class Rectangle
{
    int x, y, height, weight, heightX, weightY;
    Pkt pkt;

public:
    Rectangle(int, int, int, int, int, int);
    ~Rectangle();
    void check_pkt();
};