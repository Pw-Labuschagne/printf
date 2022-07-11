#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct fun_run
{
char *fun_run;
int (*f)(va_list);
}op_f;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_str(va_list);
int _print_c(va_list);
int _print_spec(va_list);
int _print_int(va_list);
int _print_rev(va_list);
int _print_bin(va_list);
int _print_rot13(va_list);

/*typedef struct fun_run
{
	char *fun_run;
	int (*f)(va_list);
}op_f;*/

#endif
