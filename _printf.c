#include "main.h"
/**
 * _printf - prints to stdout
 * @format: conversation specifier
 * @...: number of variables
 * Return: int ammount;
 */

int _printf(const char *format, ...)
{
char special[] = {'c', 's', 'd', 'i', 'o', 'x', 'X', 'p', 'b', 'S', 'r', 'R'};
int i, x, s = 0; /* Counter for char*/
va_list arg_list; /* Using ellips, use list to use as placeholder*/

va_start(arg_list, format);/*Initializes the arg list*/
for (i = 0; format[i] != '\0'; i++)
{
		if (format == NULL)
			return (NULL);
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{	
				_putchar('%');
				continue;
			}
			for (x = 0; x <= 11; x ++)
			{
				if (format[i] == special[x])
				{
					s += input_mod(format[i]);
					continue;
				}
				else
				{
					x++
				}
			}
		}
	s += _putchar(format[i]);
char c = va_arg(arg_list, int);
}
va_end(arg_list); /* Ends the va list */
return (s);
}
return (0);
}
