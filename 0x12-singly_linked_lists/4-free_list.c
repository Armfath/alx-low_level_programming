#include "lists.h"
/**
 * free_list - free list
 *
 * @head: head of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp, *next;

	if (head == NULL)
	{
		return;
	}
	temp = head;
	while (temp)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}
