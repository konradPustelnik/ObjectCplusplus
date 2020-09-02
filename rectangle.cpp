#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle(int x, int y, int hx , int wy, int h, int w) : pkt(x, y), heightX(hx), weightY(wy), height(h), weight(w){}

Rectangle::~Rectangle(){}

void Rectangle::check_pkt()
{
    if ( pkt.getX() > heightX && pkt.getX() < heightX+height && pkt.getY() > weightY && pkt.getY() < weight+weightY )
        std::cout << "Inside" << std::endl;
    else if ( pkt.getX() == heightX || pkt.getX() == heightX+height && pkt.getY() >= weightY && pkt.getY() <= weight )
        std::cout << "On X" << std::endl;
    else if ( pkt.getY() == weightY|| pkt.getY() == weightY+weight && pkt.getX() >= heightX && pkt.getY() <= height )
        std::cout << "On Y" << std::endl;
    else
        std::cout << "Outside" << std::endl;
}
