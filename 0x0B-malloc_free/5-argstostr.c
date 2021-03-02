#include <stdlib.h>
#include "holberton.h"
/**
*argstostr - yfz
*@ac: yfz
*@av: yfz
*Return: yfz
**/
char *argstostr(int ac, char **av)
{
int i = 0, x = 0, y = 0, z = 0;
char *p;
if (ac == 0 || av == NULL)
return (NULL);
for (; i < ac; i++)
{
x = 0;
for (; av[i][x] != '\0'; x++)
y++;
}
p = malloc(y + ac + 1 * sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
x = 0;
for (; av[i][x] != '\0'; x++)
{
p[z] = av[i][x];
z++;
}
p[z] = '\n';
z++;
}
return (p);
}
