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
va_list buff;
char *c;
/*int i = 0;*/

while (format == NULL)
{
return (0);
}

va_start(buff, format);
/*for (i = 0)*/

c = va_arg(buff, char *);
<<<<<<< HEAD
}
/*if (format != 0)
=======

if (format != 0)
>>>>>>> 16905e5f0ba4dbc4ec47bb29e0bbf333cafb1f79
{
i++;
}*/
while (format[i])
{
	fun_run(c)(buff);
}

va_end(buff);
return (i);
}
