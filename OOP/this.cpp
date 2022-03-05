#include <iostream>


class Point
{
private:
    int x;
    int y;

public:

    Point()
    {
        x = 0;
        y = 0;
        std::cout << this << " constructor" << std::endl;
    }

    Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
        std::cout << this << " constructor" << std::endl;
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

    void SetY(int y)
    {
        this->y = y;
    }

    void Print()
    {
        std::cout << "x = " << x << "\t" << "y = " << y << std::endl << std::endl;
    }
};


int main()
{
    Point a;
    a.SetY(5);
    a.Print();


    return 0;
}