#include <iostream>
#include <cmath>


int main()
{
    const float PI = M_PI;
    const float g = 9.8;

    int V, T;

    std::cin >> V >> T;

    float a,b;
    b = (g * T) / (2 * V);
    a = asin(b);

    std::cout << a << std::endl;

    
    return 0;
}
