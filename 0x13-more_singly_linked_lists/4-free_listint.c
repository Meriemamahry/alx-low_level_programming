#include "lists.h"

/**
 * free_listint - frees memory of the first element of listint
 * @head: pointer to the first elemnt of lisint
 */
void free_listint(listin_t *head)
{
	listint_t *cell;

	while (head)
	{
		cell = head;
		head = head->next;
		free(cell);
	}
}
