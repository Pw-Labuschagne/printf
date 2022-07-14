<<<<<<< HEAD
#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct helper_funcs - Helper functions and cases
 * @c: Char for format
 * @f: Function pointer for helper function to call
 */

typedef struct helper_funcs
{
	char c;
	int (*f)(va_list);
} hf;

int _printf(const char *format, ...);
int print_str(va_list);
int print_ch(va_list);
int print_int(va_list);
int _putchar(char c);
char *reverse(char s[]);
int (*get_format(char s))(va_list);
int special_ch(char c);
int print_rev_str(va_list);
int print_bin(va_list);
int print_rot13(va_list);
=======
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
>>>>>>> 34dc39dfdac772d805f5211d31a4f202fda142f2

#endif
