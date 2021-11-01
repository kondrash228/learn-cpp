#include <iostream>
#include <string>


// динамическая память. Операторы выделения памяти new и delete

int main()
{
    int *pa = new int;
    *pa = 10; // что бы присвоить значение указателю для начала нужно его разыменовать 
    std::cout << *pa << "\n";
    delete pa;
    return 0;
}