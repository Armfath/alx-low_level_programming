#include "lists.h"
/**
 * add_node_end - adds a new node at the end of linked list
 * @head: head of the l_l
 * @str: data (str)
 *
 * Return: head of the nex l_l
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	char *s;

	last = *head;
	s = strdup(str);
	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = s;
		new->len = strlen(s);
		new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
