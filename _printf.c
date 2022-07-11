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

*c = va_arg(buff, char);

/*if (format != 0)
if (format != 0)
{
i++;
}*/
va_end(buff);

while (format[i])
{
	fun_run(c)(buff);
}


return (0);
}
