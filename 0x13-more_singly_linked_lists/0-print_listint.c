#include "lists.h"
/**
 * print_listint - prints all the elements of a struct list type listint_t
 * @h: a pointer to the head
 * Return: amount of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 1;

	if (h)
	{
		printf("%i\n", h->n);

		if (h->next)
			c += print_listint(h->next);

		return (c);
	}
	else
		return (0);
}
