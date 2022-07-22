#include <iostream>
#include <cmath>


int main()
{
    int num, degree;
    int result = 1;

    std::cin >> num >> degree;

    for (int i = 0; i < degree; i++)
    {
        result *= num;
    }

    std::cout << num << " в степени " << degree << " = " << result << std::endl;

    return 0;
}
