#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 *listint_len -  function that returns the number of elements in
 *@h: simgly list
 *Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{	count++;
		h = h->next;
	}
	return (count);

}
