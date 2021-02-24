#include "holberton.h"
/**
*_strpbrk - function
*@s: char
*@accept: pointer
*Return: do it
**/
char *_strpbrk(char *s, char *accept)
{
int a = 0;
int b = 0;
int c = 0;
while (s[b] != '\0')
b++;
while (a <= b)
{
for (c = 0; accept[c] != '\0'; c++)
{
if (accept[c] == s[a])
{
s = s + a;
return (s);			}
}
a++;
}
if (a < b)
s[a + 1] = '\0';
return (0);
}
