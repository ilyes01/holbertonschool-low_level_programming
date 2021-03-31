#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
*create_file - function that creates a file.
*@filename: const char
*@text_content: char
*Return: 0
*/
int create_file(const char *filename, char *text_content)
{
int x = 0, a = 0, b = 0;
if (!filename)
{
return (-1);
}
x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (x == -1)
{
return (-1);
}
if (!text_content)
text_content = "";
while (text_content[a])
a++;
b = write(x, text_content, a);
if (b == -1)
{
return (-1);
}
close(x);
return (1);
}
