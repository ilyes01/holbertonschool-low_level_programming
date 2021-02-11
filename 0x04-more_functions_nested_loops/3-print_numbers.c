#include "holberton.h"
/**
* print_numbers - print from 0 to 9 followed by new line
*
*Return: 0
*/
void print_numbers(void)
{
int p;

for (p = '0'; p <= '9'; ++p)
{
_putchar(p);
}
_putchar('\n');
}
