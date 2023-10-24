#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *sum_listint - unction that returns the sum of all the data (n) of a listint_t
 *@head: pointer
 *Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
