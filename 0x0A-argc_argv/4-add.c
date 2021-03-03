#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - ziiid
*
*@argc:integer
*@argv: caracter
*Return: integer
*/
int main(int argc, char *argv[])
{
int a = 0, x, y;
for (x = 1; x < argc; x++)
{
for (y = 0; argv[x][y]; y++)
{
if (isdigit(argv[x][y]) == 0)
{
printf("Error\n");
return (1);
}
}
}
for (x = 1; x < argc; x++)
{
a += atoi(argv[x]);
}
printf("%d\n", a);
return (0);
}
