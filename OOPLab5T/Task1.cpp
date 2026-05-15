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

    ~RightAngled() {
        std::cout << "Destroyed RightAngled" << std::endl;
    }

    double getHypotenuse() const {
        return std::sqrt(a*a + b*b);
    }

    double getArea() const {
        return 0.5 * a*b;
    }
};

void task1() {

    RightAngled a = RightAngled();

    std::cout << "Input Cat1 and Cat2 for B: " << std::endl;
    double cat1,cat2 = 0;
    std::cin >> cat1 >> cat2;
    RightAngled b = RightAngled(cat1, cat2);

    std::cout<<"a, side 1: " << a.getFirst() << " ,a - side 2: " << a.getSecond() << std::endl;
    std::cout << "b, side 1: " << b.getFirst()<<" ,b - side 2: " << b.getSecond() << std::endl;

    std::cout << "Hypotenuse a: " << a.getHypotenuse()<< std::endl;
    std::cout << "Hypotenuse b: " << b.getHypotenuse() << std::endl;

    std::cout << "Area a: " << a.getArea()<< std::endl;
    std::cout << "Area b: " << b.getArea()<< std::endl;
}