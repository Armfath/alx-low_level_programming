#include "9-lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *h;
	listint_t *before;
	listint_t *after;
	unsigned int n_node = 0, i;

	h = *head;
	while (h != NULL)
	{
		n_node++;
		h = h->next;
	}
	if (idx > n_node)
		return (NULL);
	if (idx == n_node)
		return (add_nodeint_end(&(*head), n));
	h = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
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
