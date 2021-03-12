#include "variadic_functions.h"
#include "my_functions.h"
#include <stdarg.h>
/**
*print_all - function that prints
*@format: format passed
**/
void print_all(const char * const format, ...)
{
unsigned int i = 0, b = 0;
void (*fp)(va_list);
va_list list;
char *sep = "";

type t[] = {
{"c", _printc},
{"i", _printi},
{"f", _printf},
{"s", _prints},
	{NULL, NULL}
	};

va_start(list, format);
while (format && format[i])
	{
b = 0;
while (t[b].c != NULL)
{
if (t[b].c[0] == format[i])
{
printf("%s", sep);
fp = t[b].f;
fp(list);
sep = ", ";
}
b++;
}
i++;
}
va_end(list);
printf("\n");
}
