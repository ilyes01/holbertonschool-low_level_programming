#include <stdio.h>
/**
*main - entry point
*Return: 0
*/
int main(void)
{
int p;

for (p = '0'; p - 1 < '9'; ++p)
{
putchar(p);
}
for (p = 'a'; p - 1 < 'f'; ++p)
{
putchar(p);
}
putchar('\n');
return (0);
}
