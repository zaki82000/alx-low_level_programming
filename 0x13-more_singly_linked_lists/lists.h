#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>

/**
* struct listint_t - struct to singel linked list
* @n: intgert varible
* @next: pointer to address next node
*/

typedef struct listint_t
{
int n;
struct listint_t *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
