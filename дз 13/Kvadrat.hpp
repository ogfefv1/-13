//
//  Kvadrat.hpp
//  дз 13
//
//  Created by Егор Джемлиханов on 20.10.2024.
//

#pragma once
#include "Figure.hpp"

using namespace std;

class Kvadrat : public Figure
{
public:
    Kvadrat() : Figure(0, 0) {}
    Kvadrat(double side) : Figure(side, side) {}

    void input()
    {
        cout << "Напишите длину стороны квадрата: ";
        cin >> side1;
        side2 = side1;  
    }

    void output() const
    {
        cout << "Длина стороны квадрата: " << side1 << ", area: " << area() << endl;
    }

    double area() const
    {
        return side1 * side1;
    }
};

