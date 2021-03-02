#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
**create_array - print
*@c:var
*@size: the size of the memory
*Return: Nothing.
*/
char *create_array(unsigned int size, char c)
{
unsigned int x;
char *y;
x = 0;
y = malloc(sizeof(char) * size);
if (y == 0)
return (NULL);
if (size > 0)
{
while (x < size)
{
y[x] = c;
x++;
}
y[x] = '\0';
return (y);
}
else
return (NULL);
}
