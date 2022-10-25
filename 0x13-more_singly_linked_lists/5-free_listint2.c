#include "lists.h"
/**
 * free_listint2 - free whole list and set l_l to nil
 * @head: list head
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *h;

	if (head == NULL)
		return;
	h = *head;
	while (h->next != NULL)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}
	free(h);
	*head = NULL;
}
