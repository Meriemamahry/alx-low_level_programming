#include "lists.h"
/**
 * listint_len - counts all the elements of a struct list type listint_t
 * @h: pointer to the head
 * Return: amount of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 1;

	if (h)
	{
		if (h->next)
			c += listint_len(h->next);

		return (c);
	}
	else
	{
		return (0);

	}
}
