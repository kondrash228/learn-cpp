#include <iostream>

class Emploee
{
private:
std::string name;
long long number;

public:
    Emploee(std::string name, long long number)
    {
        this->name = name;
        this->number = number;
    }

    void pushdata()
    {
        std::cout << "name " << this->name << std::endl << "numnber " << this->number << std::endl;

    };   

    int getdata()
    {
        return this->number;
    }

};

int main(void)
{
    Emploee a("Egor", 15);

    a.pushdata();

}