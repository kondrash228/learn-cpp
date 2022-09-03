#include <iostream>
/*

class - все поля private если это не указать
struct - все поля puiblic если это не указать

*/

class MyClass
{
public:
    int a = 10;

    void print()
    {
        std::cout << a << std::endl;
    }

    MyClass(std::string name, int age)
    {
        std::cout << name << age <<  " class" << std::endl;
    }

    ~MyClass()
    {
        std::cout << "деструктор class" << std::endl;
    }
};

struct MyStruct
{
    int a = 22;

    void print()
    {
        std::cout << a << std::endl;
    }

    MyStruct(std::string name, int age)
    {
        std::cout << name << age << " struct" << std::endl;
    }

    ~MyStruct()
    {
        std::cout << "деструктор struct" << std::endl;
    }
};


class MyClass1
{
public:
    int a = 10;
};
 
class MyClass2 : public MyClass1 // default private
{

};

struct MyStruct1
{
    int a = 22;
};


struct MyStruct2 : private MyStruct1 // default public
{

};

int main()
{
    // MyClass m("egor", 15);

    // MyStruct ms("kate", 20);

    MyClass2 m2;

    m2.a;

    MyStruct2 ms2;

    // std::cout << ms2.a << std::endl;

}