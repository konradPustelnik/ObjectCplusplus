#include <iostream>
#include <fstream>

enum Operations{
    Operation_Invalid,
    Add,
    Subtract,
    Multiply,
    Divide,
};

 Operations resolveOperation(std::string oper) {
    if( oper == "add" ) return Add;
    if( oper == "subtract" ) return Subtract;
    if( oper == "multiply" ) return Multiply;
    if( oper == "divide" ) return Divide;
    return Operation_Invalid;
 }

bool readFile ( std::string filename, std::string template_string )
{
    std::ifstream file;
    file.open(filename.c_str());

    if( file.good() ){
        std::string filecontent;
        while( std::getline( file, filecontent ) )
            if (filecontent.find(template_string) != std::string::npos) {
                std::cout << filecontent << std::endl;
            }
        }
    else{
        return false;
    }
    file.close();
    return true;
}

bool readFileAndDoCalculations ( std::string filename )
{
    std::ifstream file;
    file.open(filename.c_str());

    if( file.good() ){
        int first=0, second=0;
        std::string oper;
        while( true )
        {
            file >> first >> oper >> second;
            if( !file.fail() )
            {
                switch (resolveOperation(oper))
                {
                    case Add:{
                        std::cout << first << " + " << second << " = " << first + second << std::endl;
                        break;
                        }
                    case Subtract:{
                        std::cout << first << " - " << second << " = " << first - second << std::endl;
                        break;
                        }
                    case Multiply:{
                        std::cout << first << " * " << second << " = " << first * second << std::endl;
                        break;
                        }
                    case Divide:{
                        std::cout << first << " / " << second << " = " << first / second << std::endl;
                        break;
                        }
                    default:{
                        std::cout << "Unrecognized operation" << std::endl;
                        break;
                    }
                }
            }
            else
                break;
        }
    }
    else{
        return false;
    }
    file.close();
    return true;
}

int main()
{
    std::string template_string;
    std::cin >> template_string;
    if ( ! readFile( "/home/pi/RPI/diode.sh", template_string ) )
        std::cout << "Cannot read file.." ;
    if ( ! readFileAndDoCalculations( "/home/pi/maths" ) )
        std::cout << "Cannot read file.." ;
    return 0;
}
