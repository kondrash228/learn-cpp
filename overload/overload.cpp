#include <iostream>

int Sum(int a, int b) 
{
    return a + b;
}

bool Sum(bool a, bool b)
{
    if (a) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    Sum(10, 12);
    Sum(true, false);
    return 0;
}