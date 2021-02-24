#include "holberton.h"
#include <stdio.h>
/**
*print_chessboard - check
*@a: var
*Return: 0
*/
void print_chessboard(char (*a)[8])
{
int x = 0;
int y = 0;
while (x < 8)
{
y = 0;
while (y < 8)
{
putchar(a[x][y]);
y++;
}
x++;
putchar('\n');
}
}
