#include "holberton.h"
#include <stdio.h>
/**
* _strlen - function length og string
* @s: pointer
* Return: length of string
*/
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
i++;
return (i);
}
