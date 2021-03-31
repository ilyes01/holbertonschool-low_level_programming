#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
*append_text_to_file - function that appends
*text at the end of a file.
*@filename: const char
*@text_content: char
*Return: 0.
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int wr = 0, len;
	if (filename == NULL)
		return (-1);
	x = open(filename, O_RDWR | O_APPEND, 0600);
	if (xx == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		wr = write(x, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(x);
	return (1);
}
