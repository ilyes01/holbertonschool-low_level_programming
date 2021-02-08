#include "holberton.h"
/**
* print_alphabet - entry point
*
* Return: 0
*/
void print_alphabet(void)
{
	char  m ;

	for (m = 'a'; m <= 'z'; m ++)
{
	_putchar (m);
}
	_putchar ('\n');
}
