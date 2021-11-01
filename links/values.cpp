#include <iostream>


void Foo(int &a, int &b, int &c)
{

    a = 10;

    b *= 2;

    c -= 100;
}


int main()
{
    int a = 0, b = 4, c = 34;

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";

    std::cout << "foo" << "\n";
    Foo(a,b,c);

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";

    return 0;
}