#include "main.h"
/**
 * _pow_recursion - returns the value of x raised of the power of y
 * @x: integer number
 * @y: integer number
 * Return: x raised of the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
