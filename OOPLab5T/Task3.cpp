//
// Created by acer_ on 14.05.2026.
//

#include "Task3.h"

#include <iostream>

class Triad {
private:
    int a, b, c;
public:
    Triad(int a = 0, int b = 0, int c = 0) : a(a), b(b), c(c) {
        std::cout << "Created Triad"<< std::endl;
    }
    ~Triad() {
        std::cout << "Destroyed Triad" << std::endl;
    }

    void incrementA(int first) {
        a += first;
    }
    void incrementB(int second) {
        b += second;
    }
    void incrementC(int third) {
        c += third;
    }

    int getA() const {
        return a;
    }
    int getB() const {
        return b;
    }
    int getC() const {
        return c;
    }
};

class Time {
private:
    Triad time;

public:
    Time(Triad t) {
        time = t;
        std::cout << "Created Time" << std::endl;
    }
    ~Time() {
        std::cout << "Destroyed Time" << std::endl;
    }

    Time(const Time& other) {
        time = other.time;
    }

    Time& operator=(const Time& other) {
        time = other.time;
        return *this;
    }

    Time(Time&& other) {
        time = other.time;
        other.time = Triad();
    }

    Time& operator=(Time&& other) {
        time = other.time;
        other.time = Triad();

        return *this;
    }

    int getHours() const {
        return time.getA();
    }
    int getMinutes() const {
        return time.getB();
    }
    int getSeconds() const {
        return time.getC();
    }

    void incrementTime(int hr = 1, int min = 1, int sec = 1) {
        time.incrementC(sec);
        time.incrementB(min);
        time.incrementA(hr);
    }
};

void task3() {

    Triad a = Triad();
    Time time = Time(a);

    std::cout << "Time: "<< time.getHours() << ":" << time.getMinutes() << ":" << time.getSeconds()<< std::endl;
    std::cout << "Increment by - [hour][minutes][secundes]" << std::endl;
    int hr = 0;
    int min = 0;
    int sec = 0;

    std::cin >> hr >> min >> sec;
    time.incrementTime(hr,min,sec);
    std::cout << "Time: "<< time.getHours() << ":" << time.getMinutes() << ":" << time.getSeconds() << std::endl;

    std::cout << "Copy Time" << std::endl;
    Time c = Time(time);
    std::cout << "C = " << c.getHours() << ":" << c.getMinutes() << ":" << c.getSeconds()<< std::endl;
    c.incrementTime(10, 10, 10);

    std::cout << "time = c" << std::endl;
    time = c;

    std::cout << "Time: " << time.getHours() << ":" << time.getMinutes() << ":" << time.getSeconds()<< std::endl;
}