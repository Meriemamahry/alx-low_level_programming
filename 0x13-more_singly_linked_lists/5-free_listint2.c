#include "lists.h"
/**
 * free_listint2 - frees memory
 * @head: double pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *cell;

	if (head == NULL)
		return;

	while (*head)
	{
		if ((*head)->next)
		{
			cell = *head;
			*head = (*head)->next;
			free(cell);
		}
		else
		{
			free(*head);
			*head = NULL;
		}
	}
}
