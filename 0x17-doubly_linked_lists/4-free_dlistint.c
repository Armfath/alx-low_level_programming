#include "lists.h"
/**
 * free_dlistint - free list
 *
 * @head: head of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *next;

	if (head == NULL)
	{
		return;
	}
	temp = head;
	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
