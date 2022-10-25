#include "lists.h"
/**
 * add_nodeint_end - add node at the end
 * @head: nodeés head
 * @n: node's data
 *
 * Return: num of node in the list
 */
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
			return (*head);
		}
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new;
	}
		return (*head);
}
