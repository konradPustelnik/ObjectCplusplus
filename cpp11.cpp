#include <iostream>
#include <vector>

enum Enum
{
    red,
    green,
    blue
};

enum class StrongEnum : long;

enum class StrongEnum : long
{
    Red,
    Green,
    Blue
};

void enumFunction()
{
    Enum myEnum1 = red;
    Enum myEnum2 = Enum::green;

    int e1 = myEnum1;
    int e2 = myEnum2;
    int e3 = Enum::green;

    //StrongEnum myStrongEnum = Red; //error
    StrongEnum myStrongEnum = StrongEnum::Green;

    //int E1 = myStrongEnum; //error ( no conversion Level-->int )
    //int E2 = StrongEnum::Green; //error ( no conversion Level-->int )
    std::cout << e1 << e2 << e3 << std::endl;
}

void autoFunction()
{
    std::vector<int> sampleVector1 (3, 1);

    for(std::vector<int>::const_iterator it = sampleVector1.cbegin(); it != sampleVector1.cend(); ++it) 
        std::cout << *it << std::endl;

    std::vector<int> sampleVector2 (3, 2);

    for(auto it = sampleVector2.cbegin(); it != sampleVector2.cend(); ++it) 
        std::cout << *it << std::endl;

}

void foreachFunction()
{
    std::string text = "sample text";

    for(const char& c : text)
    {
        std::cout << c << std::endl;
    }
    for(auto& c : text)
    {
        std::cout << c << std::endl;
    }

    std::vector<int> values = {1, 3, 5, 7};

    for(auto& v : values)
    {
        v *= 2;
        std::cout << v << " ";
    }

    for(int v : values)
    {
        std::cout << v << " ";
    }

    std::cout << std::endl;
}

int main()
{
    enumFunction();
    autoFunction();
    foreachFunction();
    return 0;
}
