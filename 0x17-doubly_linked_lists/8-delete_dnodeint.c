#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node
 *
 * @head: head
 * @index: index
 * Return: the list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *next, *curr;
	int i = -1;

	temp = (*head);
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (((int)index < 0 || (int)index > i))
		return (-1);
	if (index == 0)
	{
		temp = (*head);
		if ((*head)->next != NULL)
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
		}
		free(temp);
		temp = NULL;
		return (1);
	}
	if ((int)index == i)
	{
		temp = (*head);
		for (; index > 1; index--)
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
