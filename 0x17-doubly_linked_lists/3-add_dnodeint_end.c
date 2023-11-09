#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *temp = malloc(sizeof(dlistint_t));
    
    temp->next = *head;
    temp->prev = NULL;
    temp->n = n;
    *head = temp;
     
    while (temp)
    {
        temp = temp->prev;
    }
    
    return (temp);
}