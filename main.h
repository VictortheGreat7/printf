#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
int _print_char(va_list args, int *printed);
int _print_string(char *str);
int _print_int(int n);
int _print_binary(va_list args, int *printed);
int _print_unsigned(va_list args, int *printed);
int _print_unsigned_int(unsigned int n);
int _print_octal(unsigned int n);
int _print_hex(unsigned int n, int uppercase);
int handle_conversion_specifier(char specifier, va_list args);

#endif

