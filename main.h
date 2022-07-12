#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct functions_mod
{
	char c;
	int (*f)();
}f_m;

int _putchar(char c);	/*Output to stout*/
int _printf(const char *format, ...);	/*Feed prototype*/
int (*input_mod(char s))();	/*Helps to determine function needed for input*/
int _printf_c();	/*Character conversation specifier*/
int _printf_s();	/*String conversation specifier*/
int _printf_sp();	/*Special character specifier*/
int _printf_d();	/*Decimal or integer conversation specifier*/
int _printf_bin();	/*Conversion to binary*/
int _printf_u();	/*Unsigned decimal integer conversation specifier*/
int _printf_o();	/*Unsigned octal integer conversation specifier*/
int _printf_x();	/*Unsigned hex (lower) conversation specifier*/
int _printf_X();	/*Unsigned hex (UPPER) conversation specifier*/
int _printf_p();	/*Pointer in hex conversation specifier*/
int _printf_r();	/*Reverse string argument*/
int _printf_rot13();	/*Replaced with 13th letter argument*/


#endif
