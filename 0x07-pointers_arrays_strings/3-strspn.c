#include "holberton.h"
#include <stdio.h>
/**
* _strspn- check the code
* @s:hjrsy
*@accept:jkuèklr
* Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int a = 0;
int b = 0;
int c = 0;
while (s[i] != ' ' && s[i] != '\0')
{
i++;
}
while (a <= i)
{
c = 0;
while (accept[c] != '\0')
{
if (s[a] == accept[c])
b =  b + 1;
c++;
}
a++;
}
return (b);
}
