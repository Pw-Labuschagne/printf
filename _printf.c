#include "main.h"
/**
 * _printf - Prints to stdout
 * @format: format conversation specifier to identify
 * Return: Amount of characters printed
 */

int _printf(const char *format, ...)
{
	int i, x;

for (i = 0; i < format[i]; i++)
{
	switch(format[i])
	{
		case 'c' :
			_putchar('%');
			_putchar('c');
			break;
		case 's' :
			_putchar('%');
			_putchar('s');
			break;
		case '%' :
			_putchar('%');
			_putchar('%');
			break;
		default :
			_putchar(format[i]);
	}
}

x = strlen(format);
_putchar('\0');
return (x);
}
