//
// Created by acer_ on 14.05.2026.
//

#include "Task1.h"

#include <complex>
#include <iostream>
#include <ostream>

class Pair {
    public:
    double a,b;
    Pair(double first = 0.0, double second = 0.0) {
        a = first;
        b = second;
        std::cout << "Constructed Pair" << std::endl;
    }

    ~Pair() {
        std::cout << "Destroyed Pair" << std::endl;
    }

    double getFirst() {
        return a;
    }

    double getSecond() {
        return b;
    }

    void setFirst(double first) {
        a = first;
    }
    void setSecond(double second) {
        b = second;
    }
};

class RightAngled : public Pair
{
public:
    RightAngled(double cat1 = 0.0, double cat2 = 0.0) : Pair(cat1, cat2) {
        std::cout << "Constructed RightAngled" << std::endl;
    }

    double getHypotenuse() const {
        return std::sqrt(a*a + b*b);
    }

    double getArea() const {
        return 0.5 * a*b;
    }
};

void task1() {

}