#include <iostream>
#include <string>


// динамическая память. NULL и nullptr

int main()
{
    int *pa = new int;
    *pa = 10; // что бы присвоить значение указателю для начала нужно его разыменовать 
    std::cout << *pa << "\n";
    delete pa;

    pa = NULL; // = 0;

    if (pa != NULL) {
        std::cout << pa << "\n";
    }

    delete pa;
    return 0;
}