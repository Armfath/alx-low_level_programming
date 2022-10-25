#include "lists.h"
/**
 * free_listint - free l_l
 * @head: list head
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}