#include "main.h"
/**
 * _printf - prints to stdout
 * @format: conversation specifier
 * @...: number of variables
 * Return: int ammount;
 */

int _printf(const char *format, ...)
{
int i; /* Counter for char*/
va_list arg_list; /* Using ellips, use list to use as placeholder*/

va_start(arg_list, format);/*Initializes the arg list*/
for (i = 0; format[i]; i++)
{
	char c = va_arg(arg_list, int);
	printf("%c,%d", c, i);
va_end(arg_list); /* Ends the va list */
return (i);
}
return (0);
}
