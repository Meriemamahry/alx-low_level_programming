#include "lists.h"
/**
 * free_listint - frees memory
 * @head: pointer to the first member of a singly linked list
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
