#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*pop_listint -  function that deletes the head
*linked list, and returns the head node’s data.
*@head: pointer of list
*Return: the data of head node s
**/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int headval = 0;
	if (!(*head))
		return (0);
	tmp = *head;
	*head = (*head)->next;
	headval = tmp->n;
	free(tmp);
	return (headval);
}
