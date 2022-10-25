#include "lists.h"
/**
 * sum_listint - sum list data
 * @head: list's head
 *
 * Return: sum of datas
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	if (head == NULL)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}