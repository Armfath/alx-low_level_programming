#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *h;
	listint_t *before;
	listint_t *after;
	unsigned int num_node = 0, i;

	h = *head;
	while (h != NULL)
	{
		num_node++;
		h = h->next;
	}
	if (idx > num_node)
		return (NULL);
	h = *head;
	
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (head == NULL)
	{
		h = new;
		return (h);
	}
	
	for (i = 0; i < idx; i++)
	{
		if (i == (idx - 1))
		{
			before = h;
		}
		h = h->next;
	}
	after = h;
	before->next = new;
	new->next = after;
	
	return (h);
}
