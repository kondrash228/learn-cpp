#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    std::cout << rand() % 10 << "\n";

    const int SIZE = 10;

    int array[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        array[i] = rand() % 10;
        std::cout << array[i] << "\n";
    }
    

    return 0;
}