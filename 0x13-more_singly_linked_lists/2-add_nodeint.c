#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list.
 * @head: a pointer to the address of the
 * head of the listint_t list.
 * @n: the integer for the new node to contain.
 *
 * Rerturn: if the function fails - NULL.
 * otherewise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	lisint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
