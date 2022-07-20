#include <iostream>

#define DEBUG
#define DEBUG2 1

int main()
{
    setlocale(LC_ALL, "ru");

#ifdef DEBUG
    std::cout << "1" << std::endl;
#else
    std::cout << "2" << std::endl;
#endif

#if DEBUG2 > 4
    std::cout << "1.1" << std::endl;

#elif DEBUG2 < 4
    std::cout << "2.2" << std::endl;
#endif
    return 0;
}
