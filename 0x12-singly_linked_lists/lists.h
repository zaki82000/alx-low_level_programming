#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>

/**
* struct list_t - struct to singel linked list
* @str: pointer to string
* @len: lenght to linked string
* @next: pointer to address next node
*/

typedef struct list_t
{
char *str;
unsigned int len;
struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
