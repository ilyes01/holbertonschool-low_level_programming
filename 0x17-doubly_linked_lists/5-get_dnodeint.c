#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*get_dnodeint_at_index - function that returns the nth node
*@head: pointer
*@index: Position where the new node
*Return: adress of the founded
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (x == index)
			return (tmp);
		x++;
		tmp = tmp->next;
	}
	return (NULL);
}

