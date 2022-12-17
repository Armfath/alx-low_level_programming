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
	dlistint_t *temp, *new, *next;
	int i = -1;

	temp = (*h);
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if ((int)idx > i + 1 || (int)idx < 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL || idx == 0)
	{
		add_dnodeint(h, n);
		return (new);
	}
	if ((int)idx == i + 1)
	{
		add_dnodeint_end(h, n);
		return (new);
	}
	temp = (*h);
	for (; idx > 1; idx--)
		temp = temp->next;
	next = temp->next;
	new->prev = temp;
	temp->next = new;
	new->next = next;
	next->prev = new;

	return (new);
}
