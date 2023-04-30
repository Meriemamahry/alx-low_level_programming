#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: A pointer to  the head element
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded if it is not -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *p = *head;
	unsigned int i;

	if (p == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (p->next == NULL)
			return (-1);

		p = p->next;
	}

	tmp = p->next;
	p->next = tmp->next;
	free(tmp);
	return (1);
}
