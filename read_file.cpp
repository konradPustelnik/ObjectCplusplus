#include <iostream>
#include <fstream>

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

int main()
{
    std::string template_string;
    std::cin >> template_string;
    if ( ! readFile( "/home/pi/RPI/diode.sh", template_string ) )
        std::cout << "Cannot read file.." ;

    return 0;
}
