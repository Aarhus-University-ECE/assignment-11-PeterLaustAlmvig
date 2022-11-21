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
    //base case
    if(n == 1){
      return n + total;
    }
    //Call from the bottom up keeping the total along the way.
    else return sumtail(n-1, total + n);
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  assert(n > 0);
  int i = 1;
  int sum = 0;
  //Add i to the sum and increment i until i = n.
  while(i <= n){
    sum += i;
    i++;
  }
  return sum;
}

