#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **insert_nodeint_at_index -  function that inserts a new node
 *@head: pointer
 *@idx: the index of the list where the new node should be added
 *@n: value of int
 *Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp, *prev;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp != NULL && i > idx)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	if (i != idx)
	{
		free(new_node);
		return (NULL);
	}
	prev->next = new_node;
	new_node = tmp;
	return (new_node);
}
/**
 *print_list - function that insert a given position
 *@head: pointer
 *Return: void
 */
void print_list(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
	}
	printf("\n");
}
