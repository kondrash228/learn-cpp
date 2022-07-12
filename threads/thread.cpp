#include <iostream>
#include <thread>
#include <chrono>



void DoWork(int a, int b)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    std::cout << "=========== DoWork started ===========" << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    std::cout << "a + b = " << a + b << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    std::cout << "=========== DoWork stopped ===========" << std::endl;
}

int main()
{

    std::thread a(DoWork);


    for (size_t i = 0; true; i++)
    {
        std::cout << "ID потока = " << std::this_thread::get_id() << "\tmain works\t" << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    a.join();
    return 0;
}
