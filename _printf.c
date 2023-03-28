#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1. On error, -1 is returned,
* and error is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* _printf - Prints output according to a format.
* @format: The format string.
* Return: The number of characters printed
* (excluding the null byte used to end output to strings).
*/
int _printf(const char *format, ...)
{
va_list args;
int i = 0, count = 0;

if (format == NULL)
return (-1);
va_start(args, format);
while (format[i])
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
count += _putchar(va_arg(args, int));
break;
case 's':
count += _print_string(va_arg(args, char *));
break;
case '%':
count += _putchar('%');
break;
case 'd': case 'i':
count += _print_int(va_arg(args, int));
break;
default:
_putchar('%');
_putchar(format[i]);
count += 2;
}
}
else
{
_putchar(format[i]);
count++;
}
i++;
}
va_end(args);
return (count);
}

/**
* _print_string - Prints a string.
* @str: The string to print.
* Return: The number of characters printed.
*/
int _print_string(char *str)
{
int i = 0;

if (str == NULL)
str = "(null)";

while (str[i])
{
_putchar(str[i]);
i++;
}

return (i);
}

/**
* _print_int - Prints an integer.
* @n: The integer to print.
* Return: The number of characters printed.
*/
int _print_int(int n)
{
int count = 0;

if (n < 0)
{
_putchar('-');
count++;
n = -n;
}

if (n / 10)
count += _print_int(n / 10);

_putchar((n % 10) + '0');
count++;

return (count);
}
