//
//  Figure.hpp
//  дз 13
//
//  Created by Егор Джемлиханов on 20.10.2024.
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

    virtual void input()
    {
        cout << "Напишите размеры (side1 and side2): ";
        cin >> side1 >> side2;
    }

    virtual void output() const
    {
        cout << "Размеры рисунка: side1 = " << side1 << ", side2 = " << side2 << endl;
    }

    virtual double area() const = 0; 
};

