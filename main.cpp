/*
spring 2023 -  Lab 2B
Achapko200
description: multi file 
*/

#include <iostream>

#include "funcs.h"

using namespace std;

int main()
{
    cout << "1,9 (1 2 3 4 5 6 7 8): ";
    print_interval(1, 9);

    cout << "5,7 (5 6): ";
    print_interval(5, 7);

    cout << "5,5 (prints nothing): ";
    print_interval(5, 5);

    cout << "-2,4 (-2 -1 0 1 2 3): ";
    print_interval(-2, 4);

    cout << "-3,-1 (-3 -2): ";
    print_interval(-3, -1);
}