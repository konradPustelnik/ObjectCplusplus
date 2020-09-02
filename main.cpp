#include <iostream>
#include "question.h"
#include "event.h"
#include "rectangle.h"
#include "circle.h"
#include "object.h"
#include "triangle.h"
#include "square.h"

void do_question();
void do_event();
void do_rectangle();
void do_circle();
void do_polimorphism();
void pole_powierzchni( Object *x)
{
    x -> pole();
}

int main()
{
    //do_question();
    //do_event();
    
    //Pkt *pkt1 = new Pkt(10,20);
    //pkt1->getX();
    
    //Pkt pkt2(10,30);
    //pkt2.getX();
    //do_rectangle();
    //do_circle();
    do_polimorphism();

    return 0;
}

void do_question(){
    int sum=0;
    Question p[5];
    for (int i=0;i<5;i++)
    {
        p[i].number=i+1;
        p[i].readFromFile();
        p[i].showQuestion();
        p[i].checkResults();
        sum+=p[i].pkt;
    }
    std::cout << "Your score is: " << sum << std::endl;
}

void do_event(){
    Event e1("Zuza");
    e1.show();
    Event e2("Konrad", 28, 05, 1996);
    e2.show();
    Event e3;
    e3.load();
    e3.show();
}

void do_rectangle()
{
    Rectangle r1(1,1,0,0,10,10);
    r1.check_pkt();
    Rectangle r2(0,1,0,0,10,10);
    r2.check_pkt();
    Rectangle r3(1,0,0,0,10,10);
    r3.check_pkt();
    Rectangle r4(1,11,0,0,10,10);
    r4.check_pkt();
}

void do_circle()
{
    Circle c1;
    std::cout << "R: " << c1.get_r() << std::endl;
    std::cout << "Obw: " << c1.get_square_area() << std::endl;
    Circle c2(5,2,3);
    std::cout << "R: " <<  c2.get_r() << std::endl;
    std::cout << "Obw: " << c2.get_square_area() << std::endl;
}

void do_polimorphism()
{
    Triangle t1(3,4);
    Square s1(3);

    Object *wsk;

    wsk = &t1;
    wsk -> pole();

    wsk = &s1;
    wsk -> pole();

    pole_powierzchni(wsk);
}