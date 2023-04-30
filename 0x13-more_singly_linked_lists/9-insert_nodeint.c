#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list
 * @idx: position to add the node
 * @n: data for new node
 * Return: the address of the new node, NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *new_elm;
	unsigned int i = 0;

	new_elm = malloc(sizeof(listint_t));
	if (new_elm == NULL)
		return (NULL);
	new_elm->n = n;

	if (idx == 0)
	{
		new_elm->next = *head;
		*head = new_elm;
		return (*head);
	}
	while (tmp && i != idx - 1)
	{
		i++;
		tmp = tmp->next;
	}

	if (i == idx - 1 && tmp)
	{
		new_elm->next = tmp->next;
		tmp->next = new_elm;
		return (new_elm);
	}

	free(new_elm);
	return (NULL);
}
