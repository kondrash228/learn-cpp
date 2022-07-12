#include <iostream>
#include <ctime>
#include <vector>
#include <cmath>


int main()
{

    std::cout << "How many elevators in the hotel?" << std::endl;
    int countOfElevators;
    std::cin >> countOfElevators;

    std::vector<int> elevators(countOfElevators);

    srand(time(nullptr));

    for (int i = 0; i < countOfElevators; i++)
    {
        elevators[i] = rand() % 10 + 1;
        std::cout << "Elevator on " << elevators[i] << " floor" << std::endl;
    }

    std::cout << std::endl;

    std::cout << "What floor are you on?" << std::endl;

    int currentFloor;
    std::cin >> currentFloor;

    std::vector<int> posOfElevators(countOfElevators);

    for (int i = 0; i < countOfElevators; i++)
    {
        posOfElevators[i] = abs(elevators[i] - currentFloor);
    }


    int min_elem = posOfElevators[0];
    int index = 0;

    for (int i = 1; i < countOfElevators; i++)
    {
        if (posOfElevators[i] < min_elem)
        {
            index = i;
        }
    }


    std::cout << "Success! The best elevator is on the " << elevators[index] << " floor" << std::endl;

    return 0;
}
