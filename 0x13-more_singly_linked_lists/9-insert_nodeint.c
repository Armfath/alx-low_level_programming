#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
    listint_t *h;
    listint_t *before;
    listint_t *after;
    unsigned int num_node = 0, i;

    h = *head;
    while (h->next != NULL)
    {
        num_node++;
        h = h->next;
    }
    h = *head;
    
    if (idx > num_node)
    {
       return (NULL);
    }
    
   new = malloc(sizeof(listint_t));
    for (i = 0; i < idx; i++)
    {
        if (i == (idx - 1))
        {
            before = h;
        }
        h = h->next;
    }
    after = h;
	new->n = n;
	new->next = NULL;
	before->next = new;
	new->next = after;
    return (h);
}