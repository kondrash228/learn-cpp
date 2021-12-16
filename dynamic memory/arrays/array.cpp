#include <iostream>

int main()
{   
    int size;
    std::cin >> size;
    int *arr = new int[size];


    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
    


    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\t";
        std::cout << arr + i << "\n";
    }
    
    
    

    delete []arr;
    return 0;
}