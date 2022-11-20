#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n > 0);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
    assert(n > 0);
    if(n == 1){
      return n + total;
    }
    else return sumtail(n-1, total + n);
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  assert(n > 0);
  int i = 1;
  int sum = 0;
  while(i <= n){
    sum += i;
    i++;
  }
  return sum;
}

