#include <iostream>


class Point
{
private:
    int x;
    int y;

public:

    Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
    }

    int GetX()
    {
        return x;
    }

    int GetY()
    {
        return y;
    }

    void SetX(int valueX)
    {
        x = valueX;
    }

    void SetY(int valueY)
    {
        y = valueY;
    }

    void Print()
    {
        std::cout << "x = " << x << "\t" << "y = " << y << std::endl << std::endl;
    }
};

class CoffeGrinder
{
private:

     bool checkVoltage()
     {
         return true;
     }


public:
    void start()
    {
         bool voltageIsNormal = checkVoltage();

        if (voltageIsNormal)
        {
            std::cout << "VjuHHH!!" << std::endl;
        }
        else
        {
            std::cout << "Beep Beep" << std::endl;
        }

    }

};


int main()
{

    Point a(5, 33);

    a.Print();

    Point b(44, 11);

    b.Print();

    return 0;
}