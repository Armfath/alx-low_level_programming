#include "lists.h"

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
