#include "lists.h"
/**
 * pop_listint - returns data of the head & delete it
 * @head: double pointer to the head
 * Return: int value of node deleted from start of list
 */
int pop_listint(listint_t **head)
{
	listint_t *cell;
	int i;

	if (*head == NULL)
		return (0);
	cell = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(cell);
	return (i);
}
