#include "lists.h"
/**
 * get_nodeint_at_index - eturns the nth node of a listint_t linked list
 * @head: list's head
 * @index: node that should be returned index
 *
 * Return: passed index's node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head != NULL)
	{
		for (i = 0; i < index; i++)
		{
			head = head->next;
		}
		return (head);
	}
	return (NULL);
}