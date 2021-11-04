#include <iostream>

// копируем динамический массив


void FillArray(int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void ShowArray(const int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{   const int size = 10;
    int arr[size];
    FillArray(arr, size);
    ShowArray(arr, size);
}