#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
int _print_char(va_list args, int *printed);
int _print_string(char *str);
int _print_int(int n);
int _print_binary(va_list args, int *printed);
int _print_unsigned(va_list args, int *printed);

#endif

