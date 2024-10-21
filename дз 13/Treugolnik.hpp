//
//  Treugolnik.hpp
//  дз 13
//
//  Created by Егор Джемлиханов on 19.10.2024.
//

#pragma once
#include "Figure.hpp"

class Treugolnik : public Figure
{
public:
    Treugolnik() : Figure(0, 0) {}
    Treugolnik(double base, double height) : Figure(base, height) {}

    void input()
    {
        cout << "Напишите основание и высоту треугольника: ";
        cin >> side1 >> side2;
    }

    void output() const
    {
        cout << "Основание треугольника: " << side1 << ", высота: " << side2 << endl;
    }

    void ShowArea() const
    {
        cout << "Площадь треугольника: " << 0.5 * side1 * side2 << endl;
    }
};
