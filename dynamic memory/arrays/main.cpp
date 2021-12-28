#include <iostream>


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
    std::cout << std::endl;
}

void push_back(int *&arr, int &size, const int value)
{
    int *newArray = new int[size + 1];
    
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }

    newArray[size] = value;

    delete[] arr;

    arr = newArray;

    size++;
}


int main()
{      
    int size = 5;
    int *arr = new int[size];
    
    FillArray(arr, size);
    ShowArray(arr, size);
    push_back(arr, size, 10);
    ShowArray(arr, size);

    delete[] arr;


    return 0;
}