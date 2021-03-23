#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*sum_listint - function that returns the sum of all the data
*@head: pointer of list
*Return: 0
**/
int sum_listint(listint_t *head)
{

unsigned int sum = 0;
if (!head)
return (0);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
