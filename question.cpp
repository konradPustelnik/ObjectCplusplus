#include <iostream>
#include "question.h"
#include <fstream>

void Question::readFromFile()
{
    std::ifstream file;
    file.open( "quiz.txt" );
    if( file.good() )
        std::cout << "File opened correctly"<<std::endl;
    int lineNumber = (number - 1) * 6 + 1;
    int currentNumber = 1;
    std::string line;

    while( std::getline( file, line ) )
    {
        if (currentNumber==lineNumber) question=line;
        else if (currentNumber==lineNumber+1) ans1=line;
        else if (currentNumber==lineNumber+2) ans2=line;
        else if (currentNumber==lineNumber+3) ans3=line;
        else if (currentNumber==lineNumber+4) ans4=line;
        else if (currentNumber==lineNumber+5) correctAnswer=line;
        currentNumber++;
    }
    file.close();
}

void Question::showQuestion()
{
    std::cout<<question<<std::endl;
    std::cout<<ans1<<std::endl;
    std::cout<<ans2<<std::endl;
    std::cout<<ans3<<std::endl;
    std::cout<<ans4<<std::endl;
    std::cout<<"-----------------------"<<std::endl;
    std::cin>>userAnswer;
}

void Question::checkResults()
{
    if (userAnswer==correctAnswer)  pkt=1;
    else pkt=0;
}
