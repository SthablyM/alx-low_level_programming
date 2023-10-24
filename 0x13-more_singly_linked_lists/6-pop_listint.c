#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *pop_listint -  function that deletes the head node of a listint_t
 *@head: singly link
 *Return: 0 if link is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (head == NULL)
	{
		return (0);
	}
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
