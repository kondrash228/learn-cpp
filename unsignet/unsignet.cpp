#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <ctime>

class People 
{
private:
    std::string name;
    int age;
public:
    People(std::string name, int age)
    {
        this->name = name;
        this->age = age;

        int *arr = new int[10];

        srand(time(NULL));

        for (int i = 0; i < 10; i++)
        {
            arr[i] = rand() * 10;    
        }

        for (int i = 0; i < 10; i++)
        {
            std::cout << arr[i] << std::endl;
        }
    }    
    
    void logAll()
    {
        std::cout << age << name << std::endl;
    }

    ~People()
    {
        std::cout << "destructor has worked" << std::endl;
    }

};


int main()
{
   
   int signetVar = 1500000000;
   unsigned int unsignedVar = 1500000000;
    
   int res = (signetVar * 2) / 3;
   int res2 = (unsignedVar * 2) / 3;

   std::cout << res << " " << res2 << std::endl;

   char *str = "hello world";

   std::cout << str << std::endl;

   int a = 10;
   int *pa = &a;

   std::cout << *pa << std::endl;

   
   return 0;
}
