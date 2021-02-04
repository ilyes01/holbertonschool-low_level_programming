#include <stdio.h>
/**
*main - entry point
*Return: 0
*/
int main(void)
{
int y;

for (y = '0'; y <= '9'; ++y)
{
if (y != '0')
{
putchar(',');
putchar(' ');
}
putchar(y);
}

putchar('\n');
return (0);
}
