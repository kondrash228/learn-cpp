#include <iostream>

int main()
{
    char *strArr[] = {"hello", "world", "TEST"};

    for (int i = 0; i < 3; i++)
    {
        std::cout << strArr[i] << std::endl;
    }
    
    return 0;
}