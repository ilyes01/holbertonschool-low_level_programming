#include "holberton.h"
#include <stdio.h>
/**
* _strcpy - _strcpy  function.
* @dest: char
* @src: char
*Return: comoon.
*/
char *_strcpy(char *dest, char *src)
{
int a = 0;
int x;
while (src[a] != '\0')
a++;
for (x = 0; x < a; x++)
{
dest[x] = src[x];
}
dest[a] = '\0';
	return (dest);
}
