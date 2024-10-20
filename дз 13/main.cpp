//
//  main.cpp
//  дз 13
//
//  Created by Егор Джемлиханов on 18.10.2024.
//

#include <iostream>
#include "Kvadrat.hpp"
#include "Krug.hpp"
#include "Treugolnik.hpp"
#include "Trapezia.hpp"
#include "Romb.hpp"

using namespace std;

int main()
{
    Kvadrat kvadrat;
    kvadrat.input();
    kvadrat.output();

    Krug krug;
    krug.input();
    krug.output();

    Treugolnik treugolnik;
    treugolnik.input();
    treugolnik.output();

    Trapezia trapezia;
    trapezia.input();
    trapezia.output();

    Romb romb;
    romb.input();
    romb.output();

    return 0;
}
