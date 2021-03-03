#include <stdio.h>
/**
*main - check
*@argc: var
*@argv: var
*Return: 0
*/
int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
printf("%s\n", argv[x]);
return (0);
}
