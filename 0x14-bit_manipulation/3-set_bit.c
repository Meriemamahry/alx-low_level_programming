#include "main.h"
/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: an integer
 * @index: the index
 * Return: 1, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1 << index;

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n | i;
	return (1);
}
