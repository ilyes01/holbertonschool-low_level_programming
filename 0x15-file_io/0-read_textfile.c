#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
*read_textfile - function that reads a text file and prints it to POSIX.
*@filename: file
*@letters: number of letters
*Return: 0.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer = malloc(sizeof(char) * letters);
int i;
ssize_t l, w;
	if (filename == NULL)
	return (0);
	i = open(filename, O_RDWR);
		if (i == -1)
		return (0);
	l = read(i, buffer, letters);
		if (l < 0)
		return (0);
w = write(STDOUT_FILENO, buffer, l);
if (w < 0)
return (0);

free(buffer);
close(i);
return (w);
}
