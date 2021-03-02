#include <stdlib.h>
#include "holberton.h"
/**
*alloc_grid - return a pointer
*@width: width
*@height: height
*Return: 0
**/
int **alloc_grid(int width, int height)
{
int x = 0, y = 0;
int **p;
if (width <= 0 || height <= 0)
return (NULL);
p = malloc(height * sizeof(int *));
if (p == NULL)
return (NULL);
while (x < height)
{
y = 0;
p[x] = malloc(width * sizeof(int));
if (p[x] == NULL)
{
for (; x >= 0; x--)
free(p[x]);
free(p);
return (NULL);
}
while (y < width)
{
p[x][y] = 0;
y++;
}
x++;
}
return (p);
}
