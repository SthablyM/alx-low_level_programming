#include "lists.h"
/**
 *sum_dlistint -  function that returns the sum of a data
 *@head: parameter to be checked
 *Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}
