/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    //There is two base cases.
    if(n == 1){
        return p;
    }
    if(n == 2){
        return pp;
    }
    //Calling fib starting from the bottom and calculating up while passing the result on.
    return fib(n - 1, pp, p + pp);
}
