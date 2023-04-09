#include "main.h"
#include <stdio.h>
/**
 * main -prints all argument it receives
 * @argv: string
 * @argc: number of parameters
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
