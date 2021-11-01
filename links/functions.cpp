#include <iostream>

void Foo(int a) // копия данных
{
    a = 1;
}

void Foo2(int &a) // работаем с адресом памяти
{
    a = 2; // изменяем реальное значение
}

void Foo3(int *a) // работаем с адресом памяти
{ 
    *a = 3; // сначала разыменовываем, потом присваиваем значение
}


int main()
{

    int value = 5;

    std::cout << "value = " << value << "\n\n";

    std::cout << "foo" << "\n";
    Foo(value);
    std::cout << "value = " << value << "\n\n";

    std::cout << "foo2" << "\n";
    Foo2(value);
    std::cout << "value = " << value << "\n\n";

    std::cout << "foo3" << "\n";
    Foo3(&value);
    std::cout << "value = " << value << "\n\n";


    return 0;
}