//
// Created by claudio on 22/01/24.
//

#include "factorial.h"

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}