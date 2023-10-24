#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **reverse_listint - function that reverses a listint_t linked list.
 *@head: singly link
 *Return:a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prv, *next_node;

	prv = NULL;
	while (current != NULL)
	{
		next_node = current->next;
		current->next = prv;
		prv = current;
		current = next_node;
	}
	*head = prv;
	return (prv);

}
