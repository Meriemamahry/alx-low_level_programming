include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: first arg.
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	char	m;
	long	nb;

	nb = n;
	if (nb < 0)
		nb *= -1;
	m = nb % 10 + '0';
	write(1, &m, 1);
	return (a);
}
