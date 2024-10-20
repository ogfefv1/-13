//
//  Krug.hpp
//  дз 13
//
//  Created by Егор Джемлиханов on 20.10.2024.
//

#pragma once
#include "Figure.hpp"

using namespace std;

class Krug : public Figure
{
public:
    Krug() : Figure(0, 0) {}
    Krug(double diameter) : Figure(diameter, 0) {}

    void input()
    {
        cout << "Напишите диаметр круга: ";
        cin >> side1;
    }

    void output() const
    {
        cout << "Диаметр круга: " << side1 << ", area: " << area() << endl;
    }

    double area() const
    {
        double radius = side1 / 2;
        return 3.14159 * radius * radius;
    }
};

