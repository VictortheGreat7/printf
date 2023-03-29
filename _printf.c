#include "main.h"

/**
* _printf - Prints output according to a format.
* @format: The format string.
* Return: The number of characters printed
* (excluding the null byte used to end output to strings).
*/
int _printf(const char *format, ...)
{va_list args;
int i = 0, count = 0;

if (format == NULL)
return (-1);
va_start(args, format);
while (format[i])
{
if (format[i] == '%')
{i++;
switch (format[i])
{case 'c':
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
case 'b':
count += _print_binary(args, &count);
break;
default:
_putchar('%');
_putchar(format[i]);
count += 2;
}
}
else
{_putchar(format[i]);
count++;
}
i++;
}
va_end(args);
return (count);
}

