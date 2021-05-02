#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*sum_dlistint - function that returns the sum.
*@head:  pointer
*Return: sum of node->n
**/
int sum_dlistint(dlistint_t *head)
{
	int a = 0;

	while (head)
	{
		a += head->n;
		head = head->next;
	}
	return (a);
}
