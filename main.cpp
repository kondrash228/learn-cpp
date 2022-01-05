#include <iostream>
#include <vector>

void start()
{
    std::cout << "меню: войти/зарегистрироваться" << std::endl;
    
    std::cout << "если вы захотите перейти в главное меню, рядом с полями будет" << "находиться звездочка, выполните инструкции которые будут написаны в этом поле, " << "кроме поля где написано *Имя Фамилия" << std::endl;
    
    std::cout << "Выберите что делаем\n";
    
    int choice;
    std::cin >> choice;
    
    if (choice == 1)
    {
        login();
    }
    else if (choice == 2)
    {
        registration();
    }
    else
    {
        exit(0);
    }
    
}


void login()
{
    int login;
    std::string password;
    

    if (login)
    {
        std::pair<char, char> main;
    
    }
}

int main()
{
    
    start();
    return 0;
}
