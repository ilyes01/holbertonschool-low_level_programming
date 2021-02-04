#include <stdio.h>
/**
*main - entry point
*
*Return: 0
*/
int main(void)
{
int y;
int i;

for (y = '0'; y <= '9'; ++y)
{
for (i = '0'; i <= '9'; ++i)
{
if (y != '0' || i != '0')
{
putchar(',');
putchar(' ');
}
putchar(y);
putchar(i);
}
}
putchar('\n');
return (0);
}
