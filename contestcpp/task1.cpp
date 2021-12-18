#include <iostream>


int main()
{   
    int num;
    std::cin >> num;
    
    while (true) 
    {      
        int a;
        std::cout << "write 1 to break and another num for continue ";

        std::cin >> a;
        
        if (a == 1)
        {
            break;
        }
        else 
        {   num *= 2;
            std::cout << num << "\n"; 
        }

    }
    return 0;
}