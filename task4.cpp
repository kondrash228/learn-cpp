#include <iostream>


int main()
{
    char text[] = "последовательная обработка\n символов\nстроки в С++\nпрограммирование на С++\nколичество строк#";
    int count = 0;

    for (size_t i = 0; i < std::strlen(text); i++)
    {
        if (text[i] == '\n') 
        {
            count++;
        }
    }

    std::cout << "Количество новых строк = " << count << std::endl; 

}