#include <iostream>
#include <ctime>


void fillArray(int *array, const int SIZE)
{
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
    {
        array[i] = rand() % 100;
    }

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << array[i] << "\n";
    }
        

}


int main()
{   
    const int SIZE = 10;
    int arr[SIZE];

    fillArray(arr, SIZE);
}