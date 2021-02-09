#include "holberton.h"
/**
 * print_alphabet - print
 * print message
 * Return: success
 */
void print_alphabet(void)
{
int m;

for (m = 'a'; m <= 'z'; m++)
{
_putchar(m);
}
_putchar('\n');
}
