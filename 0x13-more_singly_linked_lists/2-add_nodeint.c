#include "lists.h"
/**
 * add_nodeint - ad node at begining
 * @head: list head
 * @n: node data
 *
 * Return: num of node in the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;
	new->next = *head;
	*head = new;

	return (*head);
}