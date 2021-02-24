#include "holberton.h"
/**
*_strstr -comonn
*@haystack: comon
*@needle: comon
*Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
char *x = haystack;
char *y = needle;
while (*x)
{
y = needle;
x = haystack;
while (*y)
{
if (*x == *y)
{
y++;
x++;
}
else
break;
}
if (*y == '\0')
return (haystack);
haystack++;
}
return (0);
}
