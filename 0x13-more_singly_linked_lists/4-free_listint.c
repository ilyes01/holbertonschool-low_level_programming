#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_listint -  function that frees
*@head: pointer
**/
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
