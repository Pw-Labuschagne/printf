#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - prints to stdout
 * @format: conversation specifier
 * @...: number of variables
 * Return: int ammount;
 */

int _printf(const char *format, ...)
{
int i = 0; /* Counter for char*/
va_list arg_list; /* Using ellips, use list to use as placeholder*/

va_start(arg_list, format);/*Initializes the arg list*/
i = vfprintf (stdout, format, arg_list);
va_end(arg_list); /* Ends the va list */

_printf;
return (i);

}
