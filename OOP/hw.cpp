#include <iostream>
#include <ctime>

class Tiles
{
public:
    std::string brand;
    int size_h;
    int size_w;
    int price;


    Tiles(std::string valueB, int valueSize_h, int valueSize_w, int valuePrice)
    {
        brand = valueB;
        size_h = valueSize_h;
        size_w = valueSize_w;
        price = valuePrice;

    }


    void getData();


};

void Tiles::getData()
{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Height: " << size_h << std::endl;
    std::cout << "Weight: " << size_w << std::endl;
    std::cout << "Price: " << price << std::endl;
}

int main()
{
    Tiles a("NEXT", 100, 100, 1000);

    a.getData();



    return 0;
}