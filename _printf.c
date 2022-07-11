#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * _printf - Prints to the standard output STDOUT
 * @format: format of the variable data type
 * Return: 0
 */
int _printf(const char *format, ...)
{
int i = 0, c = 0;
va_list buff;

if (format == NULL)
{
	return (0);
}
va_start(buff, format);
c += va_arg(buff, int);
while (format[i] != '\0')
{
	i++;
	c++;
}
return (c);
}
