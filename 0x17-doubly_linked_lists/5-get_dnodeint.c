#include "lists.h"
/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: dlist header
 * @index: needed index
 * Return: Index's node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	if (head->next == NULL && index > 0)
	{
		return (NULL);
	}
	if (head->next == NULL && index == 0)
	{
		return (head);
	}
	temp = head;
	while (temp)
	{
		temp = temp->next;
		if (temp)
			n++;
	}
	if (index > n)
	{
		return (NULL);
	}
	temp = head;
	for (; index > 0; index--)
	{
		temp = temp->next;
	}

	return (temp);
}
