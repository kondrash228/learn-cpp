#include <iostream>
#include <string>


// динамическая память. NULL и nullptr

int main()
{
    int *pa = new int; // выделяем память под указатель *pa типа int
    *pa = 10; // что бы присвоить значение указателю для начала нужно его разыменовать 
    std::cout << *pa << "\n";
    delete pa; 

    pa = nullptr;

    if (pa != nullptr) {
        std::cout << pa << "\n";
    }

    delete pa;
    return 0;
}