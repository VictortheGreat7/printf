#include "main.h"

/**
* _print_unsigned_int - Prints an unsigned integer in decimal notation.
* @n: The unsigned integer to print.
* Return: The number of characters printed.
*/
int _print_unsigned_int(unsigned int n)
{
if (n / 10)
_print_unsigned_int(n / 10);
return (_putchar((n % 10) + '0'));
}

