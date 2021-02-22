#include "holberton.h"
/**
* _memset - function
* @s: pointer
* @b: type char
* @n: type unsigned
* Return: s from b.
**/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (i = 0 ; i < n; i++)
{
s[i] = b;
}
return (s);
}
