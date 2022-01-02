#include <iostream>


int main()
{
    setlocale(LC_ALL, "ru");

    for (int i = 0; i < 255; i++)
    {
        std::cout << "code = " << i << "\t" << "char = " << (char)i << std::endl;
    }
    
    return 0;
}