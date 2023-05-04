#include "lists.h"

/**
* print_listint - function that prints all the elements of a list_t list
* @h: head pointer to first node in list
*
* Return: return all elements of a list
*/

size_t print_listint(const listint_t *h)
{

	const listint_t *temp = h;
	unsigned int count = 0;

		while (temp != NULL)
		{
			if (temp->str != NULL)

			printf("[%u] %s\n", temp->len, temp->str);

			else
			printf("[%u] %s\n", 0, "(nil)");

			count++;
			temp = temp->next;
		}
	return (count);
}
