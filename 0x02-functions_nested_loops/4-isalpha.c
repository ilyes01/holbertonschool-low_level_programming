#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 *@c: parameter
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	return (1);
	else
	return (0);
}
