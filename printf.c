#include "main.h"

/**
 * _printf - function that prints different formats of data and
 * returns the number of bytes sent to the output stream
 * @format: Const char pointer that contains conversion specifiers
 * Return: Int of total number of bytes printed
 */

int _printf(const char *format, ...)
{
	int char_num = 0, i, s_c;
	va_list input;

	va_start(input, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(input);
		return (-1);
	}
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			s_c = special_ch(format[i + 1]);
			if (format[i + 1] == '%')
			{
				char_num += _putchar(format[i + 1]);
				i++;
				continue;
			}
			if (s_c == 1)
			{
				char_num += format_id(format[i + 1])(input);
				i++;
				continue;
			}
			else if (s_c == 0)
			{
				char_num += _putchar(format[i]);
				char_num += _putchar(format[i + 1]);
				i++;
				continue;
			}
		}
		else
			char_num += _putchar(format[i]);
	}
	va_end(input);
	return (char_num);
}
