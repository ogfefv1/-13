//
//  Treugolnik.hpp
//  дз 13
//
//  Created by Егор Джемлиханов on 20.10.2024.
//

#pragma once
#include "Figure.hpp"

using namespace std;

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
        cout << "Основание треугольник : " << side1 << ", высота: " << side2 << ", area: " << area() << endl;
    }

    double area() const
    {
        return 0.5 * side1 * side2;
    }
};

