#include <iostream>
#include <ctime>


int main()
{   
    srand(time(NULL));

    int rows, cols;
    std::cin >> rows >> cols;

    int **arr = new int* [rows];

    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = 1 + rand() % 99;
        }

    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << "\n";
    }
    
    int counter = 0;
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (counter >= rows)
            {
                break;
            } 
            else
            {
                sum += arr[counter][j];
                counter++;
            }

        }
    }
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    
    delete[] arr;

    std::cout << "След матрицы: " << sum << std::endl;

    return 0;
}