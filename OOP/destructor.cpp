#include <iostream>

class MyClass
{
private:
    int* data;

public:
    MyClass(int size)
    {
        data = new int[size];

        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }
        
        std::cout << "Объект " << data << " вызвался конструктор" << std::endl;
    }

    ~MyClass()
    {
        delete[] data;
        std::cout<< "Объект " << data << " вызвался деструктор класса" << std::endl;
    }
}; 

void Foo()
{
    std::cout << "Foo начало выполнения" << std::endl;
    MyClass a(1);
    std::cout << "Foo конец выполнения" << std::endl;
}


int main()
{
    
    Foo();
    return 0;
}