#include <iostream>

void CompleteArr(int arr[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = i;
    }
    
}

void LogArr(int arr[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << arr[i] << "\n";
    }
    
}


int main()
{
    const int SIZE = 10;
    int array[SIZE];
    CompleteArr(array, SIZE);
    LogArr(array, SIZE);
    return 0;
}