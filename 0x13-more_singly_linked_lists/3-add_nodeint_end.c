#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *h;

	h = *head;
	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		if (h == NULL)
		{
			*head = new;
			return (h);
		}
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new;
	}
		return (h);
}