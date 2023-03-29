#include "main.h"

/**
* handle_conversion_specifier - Handles a conversion specifier.
* @specifier: The conversion specifier.
* @args: The va_list of arguments.
* Return: The number of characters printed for this conversion specifier.
*/
int handle_conversion_specifier(char specifier, va_list args)
{
switch (specifier)
{
case 'c':
return (_putchar(va_arg(args, int)));
case 's':
return (_print_string(va_arg(args, char *)));
case '%':
return (_putchar('%'));
case 'd': case 'i':
return (_print_int(va_arg(args, int)));
case 'b':
{
int count = 0;
return (_print_binary(args, &count));
}
case 'u':
return (_print_unsigned_int(va_arg(args, unsigned int)));
case 'o':
return (_print_octal(va_arg(args, unsigned int)));
case 'x':
return (_print_hex(va_arg(args, unsigned int), 0));
case 'X':
return (_print_hex(va_arg(args, unsigned int), 1));
case 'S':
{
int i, count = 0;
char *str = va_arg(args, char *);
if (str == NULL)
return (_print_string("(null)"));
for (i = 0; str[i] != '\0'; i++)
{
if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
{
_putchar('\\');
_putchar('x');
count += 2;
count += _print_hex((unsigned int) str[i], 1);
}
else
{
_putchar(str[i]);
count++;
}
}
return (count);
}
default:
if (specifier != '\0') {
_putchar('%');
_putchar(specifier);
return (2);
}
return (-1);
}
}

