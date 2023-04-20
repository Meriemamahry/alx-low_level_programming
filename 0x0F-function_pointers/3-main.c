#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - main function
 * @agc: ..
 * @agv: ....
 * Return: 0
 */
int main(int agc, char **agv)
{
	int i;
	int j;
	int k;
	int (*func)(int, int);

	if (agc != 4)
	{
		printf("Error\n");
	}
	i = atoi(agv[1]);
	j = atoi(agv[3]);
	func = get_op_func(agv[2]);
	if (!func)
	{
		printf("Error\n");
	}
	k = func(i, j);
	printf("%d\n", k);
	return (0);
}
