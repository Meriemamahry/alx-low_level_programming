#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - add
 * @a: int
 * @b: int
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction
 * @a: int
 * @b: int
 * Return: a-b
 */
int op_sub(int a, int b);
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: int
 * @b: int
 * Return: axb
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: int
 * @b: int
 * Return: a/b
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error division by 0\n");
	}
	return (a / b);
}

/**
 *op_mod - modulo
 *@a: int
 *@b: int
 *Return: a%b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
