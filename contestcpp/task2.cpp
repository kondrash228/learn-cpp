#include <iostream>

int main()
{
    int visiters, maxAge, minAge, numbers, middleAge;
    int *ages = new int[visiters];
    maxAge = ages[0];
    minAge = ages[0];

    std::cout << "how visiters are in the gym? ";
    std::cin >> visiters;

    if (visiters == 1)
        exit(0);

    for (int i = 0; i < visiters; i++)
    {
        int currentAge;
        std::cout << "visitor " << "\n";
        std::cin >> currentAge;
        ages[i] = currentAge;
        currentAge = 0;
    }

    middleAge = 0;
    for (int i = 0; i < visiters; i++)
    {
        middleAge += ages[i];
    }
    middleAge /= visiters;

    std::cout << "VISITERS: " << visiters << "\n"
              << "MIDDLE AGE: " << middleAge << "\n";
    delete[] ages;
    return 0;
} 