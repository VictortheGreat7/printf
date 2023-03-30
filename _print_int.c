#include "main.h"

/**
* _print_int - Prints an integer.
* @n: The integer to print.
*
* Return: The number of characters printed.
*/
int _print_int(int n)
{
int sign = 1, count = 0;

if (n < 0)
{
sign = -1;
count += _putchar('-');
}

if (n / 10)
count += _print_int(sign * (n / 10));

count += _putchar('0' + (sign *n) % 10);

return (count);
}

