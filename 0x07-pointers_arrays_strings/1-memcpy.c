#include "holberton.h"
/**
* _memcpy - function copies memory area
* @dest: pointer to char
* @src: pointer
* @n: unsigned
* Return: dest from src
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;
for (x = 0; x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
