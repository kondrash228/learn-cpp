#include <iostream>

int main()
{
    std::string text;

    std::cin >> text;

    int index;

    std::cin >> index;

    if (index - 1 < 0 || index > text.size()) 
    {
        std::cout << "не верный индекс" << std::endl;
    } 
    else 
    {
        std::cout << text[index - 1] << std::endl;
    }


    return 0;

}