//
//  Figure.hpp
//  дз 13
//
//  Created by Егор Джемлиханов on 18.10.2024.
//

#pragma once
#include <iostream>

using namespace std;

class Figure
{
protected:
    double side1, side2;

public:
    Figure() : side1(0), side2(0) {}
    Figure(double s1, double s2) : side1(s1), side2(s2) {}

    void input()
    {
        cout << "Напишите размеры (side1 и side2): ";
        cin >> side1 >> side2;
    }

    void output() const
    {
        cout << "Размеры рисунка: side1 = " << side1 << ", side2 = " << side2 << endl;
    }

    void ShowArea() const
    {
        cout << "Нет определенной площади для этой фигуры." << endl;
    }
};
