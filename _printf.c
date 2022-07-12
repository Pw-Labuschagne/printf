#include "main.h"
/**
 * _printf - Prints to stdout
 * @format: conversation specifier
 * Return: Ammount of characters printed
 */
int _printf(const char *format, ...)
{
	int c, z, x;
	char *i;
	i = format;

	for (z = 0; z < format[z]; z++)
	{
	switch(format)
		case 'c' :
			_putchar('%c');
			break;
		case 's' :
			_putchar('%s');
			beak;
		case '%' :
			_putchar('%');
			break;
		default :
			_putchar(format[z]);
	}
x = strlen(format);
return (x);
}
