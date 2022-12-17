#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *next, *curr;
	int i = -1;

	temp = (*head);
	/* printf("temp->n = %d", temp->n); */
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (((int)index < 0 || (int)index > i))
		return (-1);
	if (index == 0 && (*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index == 0 && (*head)->next != NULL)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		return (1);
	}
	if ((int)index == i)
	{
		temp = (*head);
		for (; index > 0; index--)
			temp = temp->next;
		next = temp->next;
		temp->next = NULL;
		free(next);
		return (1);
	}
	temp = (*head);
	for (; index > 1; index--)
		temp = temp->next;
	curr = temp->next;
	next = curr->next;
	temp->next = next;
	next->prev = temp;
	free(curr);
	return (1);
}
