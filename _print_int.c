#include "main.h"

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
