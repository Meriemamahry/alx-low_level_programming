#include "main.h"
/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if:
 *       + there is one or more chars in
 *       the string b that is not 0 or 1
 *       + b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int j;
	int k;
	unsigned int c = 0;

	if (b == 0)
	{
		return (0);
	}
	i = 0;
	while (b[i] != 0)
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
		i++;
	}
	i = i - 1;
	for (j = 0; i >= 0; j++, i--)
	{
		if (b[i] == 48)
		{
			binary = 0;
		}
		else if (b[i] == 49)
		{
			k = 1;
		}
		k = k << j;
		c = c | k;
	}
	return (c);
}
