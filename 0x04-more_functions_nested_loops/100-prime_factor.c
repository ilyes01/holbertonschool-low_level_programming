#include <stdio.h>
/**
* main - prints
*
* Return: saybo ytaada
*/
int main(void)
{
long int a = 612852475143, j = 2, x;

while (a != 0)
{
if (a % j != 0)
j += 1;
else
{
x = a;
a /= j;
if (a == 1)
{
printf("%ld\n", x);
break;
}
}
}
return (0);
}
