#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>


class Elevator
{
public:
    Elevator(int valueCountOfElevators, int valueCurrentFloor)
    {
        countOfElevators = valueCountOfElevators;
        currentFloor = valueCurrentFloor;
    }

    int countElevator()
    {
        std::vector<int> elevators(countOfElevators);

        srand(time(nullptr));

        for (int i = 0; i < countOfElevators; i++)
        {
            elevators[i] = rand() % 10 + 1;
            std::cout << "Elevator on " << elevators[i] << " floor" << std::endl;
        }

        std::vector<int> posOfElevators(countOfElevators);

        for (int i = 0; i < countOfElevators; i++)
        {
            posOfElevators[i] = abs(elevators[i] - currentFloor);
        }

        int min_elem = posOfElevators[0];
        int index = 0;

        for (int i = 0; i < countOfElevators; i++)
        {
            if (posOfElevators[i] < min_elem)
            {
                index = i;
            }
        }

        return elevators[index];
    }

private:
    int countOfElevators;
    int currentFloor;
};



int main()
{
    return 0;
}

