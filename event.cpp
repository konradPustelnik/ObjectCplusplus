#include <iostream>
#include "event.h"

Event::Event(std::string name, int day, int month, int year){
    this->name=name;
    this->day=day;
    this->month=month;
    this->year=year;
}

//Initial list
//Event::Event(std::string n, int d, int m, int y) : name(n), day(d), month(m), year(y)
//{}

Event::~Event(){
    std::cout << "It's descructor";
}

void Event::load(){
    std::cout << "Name of event: ";
    std::cin >> name;
    std::cout << "Day: ";
    std::cin >> day;    
    std::cout << "Month: ";
    std::cin >> month;    
    std::cout << "Year: ";
    std::cin >> year;    
}

void Event::show(){
    std::cout << "Name of event: " << name << " day: " << day << month << year;
}