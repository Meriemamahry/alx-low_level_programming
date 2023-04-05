#include "main.h"
/**
 *prime -  return 1 if it is a prime number otherwise 0
 *@n: integer number
 *@i: integer number
 *Return: return 1 if it is prime number
 */
int prime(int n, int i)
{
	if (i > n / i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i + 1));
}
/**
 *is_prime_number - return 1 if it is a prime number otherwise 0
 *@n: integer number
 *Return: return 1 or 0 (if it is prime 1)
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	return (prime(n, 2));
}
