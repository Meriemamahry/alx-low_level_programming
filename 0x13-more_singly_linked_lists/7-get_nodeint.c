#include "lists.h"

/**
 * get_nodeint_at_index - returns address of index member of
 * a struct list type listint_t
 * @head: pointer to the head of listint_s
 * @index: index of node in list, starting at 0
 * Return: address of index node of listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *p;

	if (head == NULL)
	{
		return (NULL);
	}
	p = head;
	for (i = 0; i < index; i++)
	{
		p = p->next;
	}

	return (p);
}
