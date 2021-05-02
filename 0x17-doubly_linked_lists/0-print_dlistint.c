#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*print_dlistint - function that print all the elements
*@h: var
*Return: number
*/
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
	return (0);
	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	i++;
	}
	return (i);
}
