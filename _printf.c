#include "main.h"

/**
* _printf - Prints output according to a format.
* @format: The format string.
* Return: The number of characters printed
*         (excluding the null byte used to end output to strings).
*/
int _printf(const char *format, ...)
{
va_list args;
int i = 0, count = 0, ret = 0;

if (format == NULL)
return (-1);

va_start(args, format);

while (format[i])
{
if (format[i] == '%')
{
i++;
ret = handle_conversion_specifier(format[i], args);
if (ret == -1)
return (-1);
count += ret;
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

