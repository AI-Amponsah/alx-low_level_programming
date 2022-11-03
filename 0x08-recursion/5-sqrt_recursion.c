#include "main.h"

/**
 * square - prints the factorial of a number
 *  @l: left index
 *  @r: right rindex
 *  @m: number
 *  Return: interger value
*/
int square(int l, int r, int m)
{
int mid;
if (r >= l)
{

mid = l + (r - l) / 2;

if ((mid *mid) == m)
{
return (mid);
}
if ((mid *mid) > m)
{
return (square(l, mid - 1, m));
}
if (mid *mid < m)
{
return (square(mid + 1, r, m));
}
}
return (-1);
}

/**
 * _sqrt_recursion - prints the factorial of a number
 *  @n: number
 *  Return: interger value
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (square(0, n, n));
}
