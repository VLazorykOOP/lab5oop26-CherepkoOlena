#include <iostream>

#include "Task1.h"
#include "Task2.h"
#include "Task3.h"
int main()
{
    std::cout << " Lab #5  !" << std::endl;

    int task = 0;
    std::cin >> task;

    if (task == 1)
        task1();
    if (task == 2)
        task2();
    if (task == 3)
        task3();
}
