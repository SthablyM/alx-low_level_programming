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
	listint_t *new_node, *tmp;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
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
	while (tmp && i < idx)
		i++;
	{
	if (i == idx - 1)
	{
		new_node->next = tmp->next;
		tmp->next = new_node;
		return (new_node);
	}
	tmp = tmp->next;
	}
	return (NULL);
}
