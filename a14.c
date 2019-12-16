#include <stdio.h>、
#include "pej.h"

#define len 5

/// Function findmax(int a[], int n)
/// Discription: 
///             to find the max element of this array and return its index
int findmax(int a[], int n)
{
    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > a[max])
        {
            max = i;
        }
    }
    return max;
}
/// Function swap.
void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
/// Main Function
int main()
{
    /// Variable list:
    ///              a[5] the array to be sorted
    int a[5] = { 12, 58, 2, 1, 98 };

    /// Loop:
    ///      to sort the array
    for (int i = len - 1; i > 0; i--)
    {
        int max = findmax(a, i);
        swap(a, i, max);
    }

    /// Loop: 
    ///      to print the array
    for (int i = 0; i < len; i++)
    {
        printf(" %d ", a[i]);
    }
    return 0;
}