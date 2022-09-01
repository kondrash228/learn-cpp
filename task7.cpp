#include <iostream>
#include <ctime>

double average_of_array(double arr[], const int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    

    return (double)sum / size; 

}


int main()
{   
    srand(time(NULL));

    int size;
    std::cin >> size;

    double *arr = new double[size];
    
    for (int i = 0; i < size; i++)
    {
        arr[i] = (double)(rand()) / RAND_MAX * 99;
    }
    
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\t";
    }

    double average = average_of_array(arr, size);
    
    delete[] arr;
    
    std::cout << "\n";
    std::cout << "среднее арифметическое: " << average << std::endl;

    


    return 0;
}