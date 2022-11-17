/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    if(n == 1){
        return p;
    }
    if(n == 2){
        return pp;
    }
    return fib(n - 1, pp, p + pp);
}
