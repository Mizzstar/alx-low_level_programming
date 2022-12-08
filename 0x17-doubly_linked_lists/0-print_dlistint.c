#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - prints elements in double linked list
 * @h: dlistint-t const
 * return: size_t
 */

size_ print_dlistint(const dlistint_t *h)
{

	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;

	}
	return (count);

}
