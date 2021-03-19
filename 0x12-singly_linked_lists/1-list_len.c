#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*list_len - function that returns the number
*@h: list
*Return: num
*/
size_t list_len(const list_t *h)
{
int  j = 0;
while (h != NULL)
{
h = (*h).next;
j++;
}
return (j);
}
