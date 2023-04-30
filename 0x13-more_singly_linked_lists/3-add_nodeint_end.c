#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the end of a struct list type listint_t
 * @head: double pointer to the first member of a singly linked list
 * @n: int to store in n member of new listint_s struct
 * Return: address of the new element, NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cell;
	listint_t *pree = *head;

	cell = malloc(sizeof(listint_t));
	if (!cell)
	{
		free(cell);
		return (NULL);
	}
	cell->n = n;
	cell->next = NULL;

	if (!*head)
		*head = cell;
	else
	{
		while (pree->next)
			pree = pree->next;

		pree->next = cell;
	}
	return (cell);
}
