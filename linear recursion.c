/*
   Program: Find maximum among array elements
   recursively. 
*/
 
#include <stdio.h>
#define SIZE 10
 
int recursiveMax (int *, int );
int max (int, int);
 
int main ()
{
    int arr[SIZE] = {1, 3, 5, 4, 7, 19, 6, 11, 10, 2};
    int max = recursiveMax(arr, SIZE);
    printf("Maximum element among array items is: %d\n", max);
 
}
 
int recursiveMax (int *arr, int n)
{
    if (n == 1)
        return arr[0];
 
    return max (recursiveMax (arr, n-1), arr[n-1]);
}
 
/* helper function to compute max of two decimal integers */
int max (int n, int m)
{
    if (n > m) return n;
    return m;
}
