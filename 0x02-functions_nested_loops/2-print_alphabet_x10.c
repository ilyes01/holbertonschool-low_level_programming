#include "holberton.h"
/**
 *print_alphabet_x10 -
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char i;
int j;
i = 'a';
for (j = 0 ; j < 10 ; j++)
{
while (i <= 'z')
{
_putchar(i);
i = i + 1;
}
i = 'a';
_putchar ('\n');
}
}
