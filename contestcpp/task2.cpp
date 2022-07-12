#include <iostream>

int main()
{

    int size;
    std::cin >> size;

    int *arr = int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }

}

