#include <iostream>


int main()
{
    int number;
    std::cin >> number;

    int num1 = number % 100 / 10;
    int num2 = number % 10;

    int min, max = 0;

    if (num1 > num2)
    {
        max = num1;
        min = num2;
    }
    else if (num2 > num1)
    {
        max = num2;
        min = num1;
    }
    else
    {
        std::cout << "цифры равны" << std::endl;
    }


    
    return 0;
}
