#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*print_list - function that prints
*@h: link
*Return: h
*
*/
size_t print_list(const list_t *h)
{
int  x = 0;
while (h != NULL)
{

if ((*h).str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", (*h).len, (*h).str);
h = (*h).next;
x++;
}
return (x);
}
