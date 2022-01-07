#include <iostream>
#include <ctime>
#include <vector>


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
    }

    for (int i = 0; i < countOfElevators; i++)
    {
        std::cout << "Elevator on " << elevators[i] << " floor" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "What floor are you on?" << std::endl;

    int currentFloor, bestElevator;
    std::cin >> currentFloor;

    bestElevator = currentFloor;

    for (int i = 0; i < countOfElevators; i++)
    {
        int currentPos = elevators[i] - currentFloor;
        std::cout << currentPos << std::endl;
        
        std::vector<int> posOfElevators(countOfElevators);

        posOfElevators.push_back(currentPos);

        if (posOfElevators[i] < bestElevator)
        {
            bestElevator = posOfElevators[i];
        }

    }

    std::cout << "Succes! The best elevator is " << bestElevator << std::endl;

    return 0;
}
