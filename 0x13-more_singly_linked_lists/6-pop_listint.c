#include "lists.h"
/**
 * pop_listint - returns data from and then deletes
 * @head: double pointer to the head
 * Return: int value of node deleted from start of list
 */
int pop_listint(listint_t **head)
{
	listint_t *cell;
	int i;

	if (!head)
		return (0);

	if (*head)
	{
		cell = *head;
		*head = (*head)->next;
		num = cell->n;
		free(cell);
		return (i);
	}
	else
		return (0);
}
