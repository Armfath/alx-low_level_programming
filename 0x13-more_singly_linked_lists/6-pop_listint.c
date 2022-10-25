#include "lists.h"
/**
 * pop_listint - delete the first node for list
 * @head: list's head
 *
 * Return: deleted data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *h;
	int n;

	if (head == NULL)
	{
		return (0);
	}
	h = *head;
	tmp = h;
	n = (*head)->n;
	*head = h->next;
	free(tmp);

	return (n);
}