#include "lists.h"

/**
 * sum_dlistint - sums all the data of a dlistint_t list.
 * @head: the head of the dlistint_t list.
 * Return: the sum of all the data.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	
	return (sum);
}
