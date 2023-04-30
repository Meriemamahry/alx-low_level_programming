#include "lists.h"
/**
 *free_listint - frees memory
 *@head: pointer to the head
 */
void free_listint(listin_t *head)
{
	listint_t *cell;

	while (head)
	{
		cell = head->next;
		free(head);
		head = cell;
	}
}
