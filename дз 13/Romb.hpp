//
//  Romb.hpp
//  дз 13
//
//  Created by Егор Джемлиханов on 20.10.2024.
//

#pragma once
#include "Figure.hpp"

using namespace std;

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
        cout << "Диагонали ромба d1: " << side1 << ", d2: " << side2
                  << ", area: " << area() << endl;
    }

    double area() const
    {
        return 0.5 * side1 * side2;
    }
};
