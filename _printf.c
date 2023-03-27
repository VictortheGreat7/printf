#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* _puts - writes the string s to stdout
* @s: The string to print
* Return: On success the number of characters printed.
* On error, -1 is returned, and error is set appropriately.
*/
int _puts(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
return (i);
}

/**
* _print_integer - Prints an integer to stdout
* @n: The integer to print
* Return: The number of characters printed
*/
int _print_integer(int n)
{
char buffer[32];
int printed_chars;

printed_chars = sprintf(buffer, "%d", n);
printed_chars += _puts(buffer);
return (printed_chars);
}

/**
* _printf - prints output according to a format.
* @format: a string composed of zero or more directives
* Return: the number of characters printed (excluding the null byte
* used to end output to strings)
*/
int _printf(const char *format, ...)
{
va_list arg_list;
int printed_chars = 0;

va_start(arg_list, format);

while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
printed_chars += _putchar(va_arg(arg_list, int));
break;
case 's':
printed_chars += _puts(va_arg(arg_list, char *) ? : "(null)");
break;
case '%':
printed_chars += _putchar('%');
break;
default:
printed_chars += _putchar('%');
printed_chars += _putchar(*format);
break;
case 'd': case 'i':
printed_chars += _print_integer(va_arg(arg_list, int));
break;
}
}
else
{
printed_chars += _putchar(*format);
}
format++;
}

va_end(arg_list);
return (printed_chars);
}

