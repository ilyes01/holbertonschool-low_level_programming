#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - checkin' the code
*@s: netgoitghj
*@c:oeurhgegrv
 * Return: 0
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
else
return ('\0');
}
