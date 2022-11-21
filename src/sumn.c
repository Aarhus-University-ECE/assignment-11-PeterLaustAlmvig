#include "sumn.h"
#include <assert.h>

#include<stdio.h>

int sumn (int n){
    assert(n > 0);
    //Base case
    if(n == 1){
        return 1;
    }
    //Calculate the sqaure of the current n-1 and call sumn on n-1.
    return (2*n-1) + sumn(n-1);
}