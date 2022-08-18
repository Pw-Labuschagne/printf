#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

/**
 * struct print_funcs - Print functions
 * @c: Char for format identification
 * @f: Function pointer for print function to call
 */

typedef struct print_funcs
{
	char c;
	int (*f)(va_list);
} pf;

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list);
int print_ch(va_list);
int print_int(va_list);
char *reverse(char s[]);
int (*format_id(char s))(va_list);
int special_ch(char c);
int print_rev_str(va_list);
int print_bin(va_list);
int print_rot13(va_list);


#endif
