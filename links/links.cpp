#include <iostream>

int main()
{
    int a = 5;

    int *pa = &a; // pointer

    int &aRef = *pa; // link

    int *ppa = &aRef; // pointer with link

    std::cout << "a\t" << a << "\n";
    *ppa = 12;
    std::cout << "a\t" << a << "\n";


    // std::cout << "a\t" << a << "\n";

    // std::cout << "&aRef\t" << aRef << "\n";
    
    // aRef += 2;

    // std::cout << "&aRef\t" << aRef << "\n";

    // aRef = 55;

    // std::cout << "a\t" << a << "\n";
    
    // std::cout << "&aRef\t" << aRef << "\n";

}