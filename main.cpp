#include <iostream>

int main()
{
    int size;
    std::cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }

    int min, max;

    min = arr[0];
    max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }


    std::cout << "максимальный элемени в массиве - " << max << " минимальный элемент - " << min << std::endl;


    return (0);
}