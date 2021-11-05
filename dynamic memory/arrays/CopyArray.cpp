#include <iostream>



void FillArray(int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }

    
}

void ShowArray(const int* arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{

    int size = 10;
    int *firstArray = new int[size];
    int *secondArray = new int[size];

    FillArray(firstArray, size);
    FillArray(secondArray, size);    


    std::cout << "FirstArray" << "\n";
    ShowArray(firstArray, size);

    std::cout << "SecondArray" << "\n";
    ShowArray(secondArray, size);

    delete[] firstArray; // очищаем старый массив от его объектов

    firstArray = new int[size]; // выделяем под новый массив память

    for (int i = 0; i < size; i++) // (пробегаемся сразу по двум массивам) присваиваем каждой ячейке массива значение ячейки SecondArray
    {
        firstArray[i] = secondArray[i];
    }
    
    std::cout << "========================" << "\n";   

    std::cout << "FirstArray" << "\n";
    ShowArray(firstArray, size);

    std::cout << "SecondArray" << "\n";
    ShowArray(secondArray, size);

    delete[] secondArray;
    delete[] firstArray;

    return 0;
}