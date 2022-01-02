#include <iostream>

int main()
{   
    // явное приведение типой
    double a = 33.3;

    std::cout << (int)a << std::endl;


    // не явное приведение типов 
    int b = 34.6665;
    std::cout << b << std::endl;

    return 0;
}