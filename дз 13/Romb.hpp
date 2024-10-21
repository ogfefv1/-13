//
//  Romb.hpp
//  дз 13
//
//  Created by Егор Джемлиханов on 19.10.2024.
//

#pragma once
#include "Figure.hpp"

class Romb : public Figure
{
public:
    Romb() : Figure(0, 0) {}
    Romb(double d1, double d2) : Figure(d1, d2) {}

    void input()
    {
        cout << "Напишите диагонали d1 и d2 ромба: ";
        cin >> side1 >> side2;
    }

    void output() const
    {
        cout << "Диагонали ромба d1: " << side1 << ", d2: " << side2 << endl;
    }

    void ShowArea() const
    {
        cout << "Площадь ромба: " << 0.5 * side1 * side2 << endl;
    }
};
