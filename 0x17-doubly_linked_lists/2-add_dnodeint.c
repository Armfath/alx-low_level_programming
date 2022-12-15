#include "lists.h"
/**
 * add_dnodeint - add new node at the begining
 *
 * @head: head of the dl
 * @n: data to insert
 * Return: the dl
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (head == NULL)
	{
		(*head) = new;
		return (*head);
	}
	new->next = (*head);
	new->prev = NULL;
	(*head) = new;

	return (*head);
}
