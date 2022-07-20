#include <iostream>
#include <string>

// pointer on function


std::string DataFromDB()
{
    return "Data from DB!!!";
}

std::string DataFromWebServer()
{
    return "Data from web server!!!";
}


void ShowInfo(std::string (*foo)())
{
    std::cout << foo() << std::endl;
}


int main()
{
    ShowInfo(DataFromWebServer);

    return 0;
}
