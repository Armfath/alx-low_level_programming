#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dl
 *
 * @head: dl's head
 * Return: sum of all the data (n) of the dl
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	if (head->next == NULL)
	{
		sum = head->n;
		return (sum);
	}
	while (head)
	{
		if (head)
			sum += head->n;
		head = head->next;
	}
	return (sum);
}
