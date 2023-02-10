/*
spring 2023 -  Lab 2B
Achapko200
description: multi file
*/

#include <iostream>

#include "funcs.h"

using namespace std;

void print_interval(int L, int U)
{
    for (int i = L; i < U; ++i)
    {
        cout << i << " ";
    }
    cout << endl;
}