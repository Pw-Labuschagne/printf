#ifndef MAIN_H
#define MAIN_H


typedef struct fun
{
char *fun;
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

#endif
