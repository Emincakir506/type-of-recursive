/*
Program: Computes n-th fibonacci number using
binary recursion.
*/
 
#include <stdio.h>
 
int recursiveFib (int);
 
int main ()
{
    int n = 6;
    printf ("%dth fibonacci number is %d\n", n, recursiveFib(n));
}
 
int recursiveFib (int n)
{
    // base case
    if (n <= 1) 
        return n;
 
    // binary recursive call
    return recursiveFib(n-1) + recursiveFib (n - 2);
}
