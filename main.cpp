#include <fstream>
#include <iostream>
 
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");

    char buff[50];

    std::ifstream fin("cppstudio.txt");

    fin >> buff;
    std::cout << buff << std::endl;

    fin.getline(buff, 50);
    fin.close();

    std::cout << buff << std::endl;

}