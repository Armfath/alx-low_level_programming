#include "lists.h"
/**
 * insert_dnodeint_at_index - add node anywhere
 *
 * @h: head
 * @idx: index
 * @n: data
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	int i = 0;

	if ((*h) == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (new);
	}
	temp = (*h);
	while (temp)
	{
		temp = temp->next;
		if (temp)
			i++;
	}
	if ((int)idx == i)
	{
		add_dnodeint_end(h, n);
		return (new);
	}
	return (NULL);
}
