#include "main.h"
#include <stdio.h>
/**
 * main - Prints number of arguments passed into a programm
 * @argv: string
 * @argc: number of parameters
 * Return: 0
 * */
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
