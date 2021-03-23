#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*get_nodeint_at_index - function that returns
*@head: pointer of list
*@index: where index is the index of node
*Return: head list starting
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (head && count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
