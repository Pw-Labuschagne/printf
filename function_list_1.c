#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Writes c to stout
 * @c: character to print
 * Return: 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _print_str - Prints string to stout
 *
