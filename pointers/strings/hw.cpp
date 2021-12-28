#include <iostream>

int strLenght(const char *str)
{
    int counter = 0;

    while (str[counter] != '\0')
    {
        counter++;
    }
    return counter;
}

int main()
{
    char *a = "hello";

    std::cout << strLenght(a);
    return 0;
}