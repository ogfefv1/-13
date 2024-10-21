//
//  Kvadrat.hpp
//  дз 13
//
//  Created by Егор Джемлиханов on 18.10.2024.
//

#pragma once
#include "Figure.hpp"

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
        cout << "Длина стороны квадрата: " << side1 << endl;
    }

    void ShowArea() const
    {
        cout << "Площадь квадрата: " << side1 * side1 << endl;
    }
};
