#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - check
*@s1:var
*
*@s2:var
*Return: 0
*/
char *str_concat(char *s1, char *s2)
{
unsigned int x = 0;
unsigned int y = 0;
unsigned int a = 0;
unsigned int b = 0;
char *s;
if (s1 != NULL)
{
while (s1[a] != '\0')
{
a++;
}
}
if (s2 != NULL)
{
while (s2[b] != '\0')
{
b++;
}
}
s = malloc(sizeof(char) * ((a + b)+1));
if (s == 0)
return (NULL);
while (x < a)
{
s[x] = s1[x];
x++;
}
while (x < (b + a))
{
s[x] = s2[y];
x++;
y++;
}
s[x] = '\0';
return (s);
}
