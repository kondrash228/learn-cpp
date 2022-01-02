#include <iostream>


int main()
{

    char string[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    char string2[] = "hello";

    std::cout << strlen(string) << std::endl;
    std::cout << string2 << std::endl;


    return 0;
}