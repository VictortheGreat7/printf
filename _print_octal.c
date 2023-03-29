#include "main.h"

/**
* _print_octal - Prints an unsigned integer in octal notation.
* @n: The unsigned integer to print.
* Return: The number of characters printed.
*/
int _print_octal(unsigned int n)
{
if (n / 8)
_print_octal(n / 8);
return (_putchar((n % 8) + '0'));
}
