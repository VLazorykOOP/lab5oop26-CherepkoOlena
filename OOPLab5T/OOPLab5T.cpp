#include <iostream>

#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
int main()
{
    std::cout << " Lab #5  !" << std::endl;

    std::cout << "Choose task:" << std::endl;
    std::cout << "1. Hierarchy" << std::endl;
    std::cout << "2. Composition" << std::endl;
    std::cout << "3. Copy and move constructors" << std::endl;
    std::cout << "Input task :" << std::endl;


    int task = 0;
    std::cin >> task;

    if (task == 1)
        task1();
    if (task == 2)
        task2();
    if (task == 3)
        task3();
}
