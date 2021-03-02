#include "holberton.h"
#include <stdlib.h>
/**
*_strdup - function that returns a pointer to a newly allocated space.
*@str: char.
*Return: Either NULL or a pointer.
*
*
*/
char *_strdup(char *str)
{
char *c;
unsigned int s, i;
s = 0;
i = 0;
if (str == 0)
return (NULL);
while (str[s] != '\0')
{
s++;
}
s++;
c = malloc(sizeof(char) * s);
if (c == 0)
return (NULL);
for (i = 0; i < s; i++)
{
c[i] = str[i];
}
c[i] = '\0';
return (c);
}
