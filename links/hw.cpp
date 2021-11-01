#include <iostream>

template <typename T>
void changeValue(T &a, T &b)
{

    T temp = a;
    a = b;
    b = temp;
}


int main()
{

    int a = 5;
    int b = 6;

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n\n";

    std::cout << "changeValue" << "\n\n";
    changeValue(a, b);


    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    return 0;
}