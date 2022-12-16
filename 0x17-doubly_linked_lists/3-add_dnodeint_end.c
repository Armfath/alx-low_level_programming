#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end
 *
 * @head: head of the dl
 * @n: data to insert
 * Return: the dl
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	last  = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	new->prev = last;
	*head = new;

	return (*head);
}
