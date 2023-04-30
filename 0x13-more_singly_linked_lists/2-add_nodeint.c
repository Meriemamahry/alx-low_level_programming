#include "lists.h"
/**
 * add_nodeint - adds a new node to the start of a struct list type listint_t
 *@head: double pointer to the first member of the singly linked list
 *@n: int to store in n member of new listint_s struct
 * Return: address of the new element, NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *cell;

	cell = malloc(sizeof(listint_t));
	if (!cell)
	{
		free(cell);
		return (NULL);
	}

	cell->n = n;
	cell->next = *head;
	*head = cell;
	return (cell);
}
