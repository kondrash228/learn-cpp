#include <iostream>

// прототип нужен что бы обращаться к функции в любом месте программы

bool IsEven(int a);

int main()
{
    std::cout << IsEven(3) << "\n";
    return 0;
}

bool IsEven(int a)
{
    if (a % 2 == 0) {
        return true;
    } else {
        return false;
    }
}