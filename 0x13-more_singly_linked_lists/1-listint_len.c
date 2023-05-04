#include "lists.h"

/**
* listint_len - function that returns the number of elements in a linked list_t
* @h: head pointer to first node in list
*
* Return: return counter of the elments
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *curr = h;
	size_t count = 0;
		while (curr != NULL)
		{
			curr = curr->next;
			count++;
		}
	return (count);
}
