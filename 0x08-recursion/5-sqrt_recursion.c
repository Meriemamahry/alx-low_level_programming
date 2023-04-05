#include "main.h"
/**
 * square - return the natural square root of a number
 * @n: integer number
 * @i: integer number
 * Return: the square
 */
int square(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (square(n, i + 1));
}
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n:  integer number
 * Return: the square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square(n, 1));
}

