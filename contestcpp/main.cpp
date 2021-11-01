#include <iostream>


template <typename T>
T print(T output)
{
    std::cout << output << "\n";

    return 0;
}

int main()
{
    std::string a = "hello world";

    print(a);
    return 0;
}