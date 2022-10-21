#include "lists.h"
/**
 * add_node - adds a new node at the beginning of linked list
 * @head: head of the l_l
 * @str: data (str)
 *
 * Return: head of the nex l_l
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *s;

	s = strdup(str);
	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = s;
		new->len = strlen(s);
		new->next = *head;
		*head = new;
	}
	return (*head);
}
