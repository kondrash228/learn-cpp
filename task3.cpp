#include <iostream>
#include <map>
#include <cmath>
#include <ctime>


int main() {     
    srand(time(NULL));

    int size;
    std::cin >> size;
    const double border = 2.5;

    int *arr = new int[size];
    int sum = 0;

    for (int i = 0; i < size; i++) {
        arr[i] = (float)(rand() % 100) / (rand() % 100 + 1);
    }
    
    for (int i = 0; i < size; i++) {
        if (abs(arr[i]) > border) {
            sum += pow(arr[i], 2);
        }
    }

    delete[] arr;
    std::cout << "Sum = " << sum << std::endl;
    return 0;   

}
