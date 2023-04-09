#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argv: string
 * @argc: number of parameters
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	if (argc < 3)
	{
		printf("error\n");
		return (-1);
	}
	else
	{
		int mul;

		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
}	return (0);
