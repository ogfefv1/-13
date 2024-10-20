//
//  Trapezia.hpp
//  дз 13
//
//  Created by Егор Джемлиханов on 20.10.2024.
//

#pragma once
#include "Figure.hpp"

using namespace std;

class Trapezia : public Figure
{
    double height;

public:
    Trapezia() : Figure(0, 0), height(0) {}
    Trapezia(double a, double b, double h) : Figure(a, b), height(h) {}

    void input()
    {
        cout << "Напишите длины оснований a, b и высоту трапеции.: ";
        cin >> side1 >> side2 >> height;
    }

    void output() const
    {
        cout << "Трапеция основание а: " << side1 << ", основание b: " << side2
                  << ", высота: " << height << ", area: " << area() << endl;
    }

    double area() const
    {
        return 0.5 * (side1 + side2) * height;
    }
};
