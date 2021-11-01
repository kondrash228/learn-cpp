#include <iostream>


template <typename T>
T Sum(T a, T b) 
{
	return a + b;
}


int main() 
{
	std::cout << Sum(1,3) << "\n";
	return 0;
}