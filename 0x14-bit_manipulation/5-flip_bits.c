#include "main.h"
/**
 * flip_bits - Return the number of bits you
 *             would need to flip to get
 *             from one number to another
 * @n: an integer
 * @m: an integer
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int j = 0;
	int k = (sizeof(i) * 8);

	while (k >= 0)
	{
		if (i & 1)
			j++;
		i = i >> 1;
		k--;
	}
	return (j);
}
