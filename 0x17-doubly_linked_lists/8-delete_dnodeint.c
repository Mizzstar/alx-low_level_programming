#include "lists"

/**
 * delete_dnodeint_at_index - deletes a node from a dlistint_t
 * at a given index.
 * @head: a pointer to the head of the dlistint_t.
 * @index: the index of node to delete.
 *
 * Return: upon success - 1.
 * otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
