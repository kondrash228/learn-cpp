#include <iostream>

int main()
{   
    int rows;
    int cols;

    std::cout << "enter rows count" << "\n";
    std::cin >> rows;
    std::cout << "enter columns count" << "\n";
    std::cin >> cols;

    int **arr = new int* [rows]; // создаем массив указателей

    for (int i = 0; i < rows; i++) // создаем колонки для нашего двумерного массива
    {
        arr[i] = new int [cols];
    }
    ///////////////////////////////////
    for (int i = 0; i < rows; i++) // заполнение массива
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 20; // генерируем случайные числа в каждый элемент нашего массива
        }
        
    }
    ///////////////////////////////////
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << "\n";
    }
    ///////////////////////////////////
    for (int i = 0; i < rows; i++) // пробегаемся по нашим строкам и очищаем оперативную память от колонок
    {
        delete[] arr[i];
    }
    
    delete[] arr;

    return 0;
}