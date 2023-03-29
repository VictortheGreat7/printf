#include "main.h"

/**
* _print_hex - Prints an unsigned integer in hexadecimal notation.
* @n: The unsigned integer to print.
* @uppercase: A flag indicating whether to use uppercase letters for A-F.
* Return: The number of characters printed.
*/
int _print_hex(unsigned int n, int uppercase)
{
char *hex_digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
if (n / 16)
_print_hex(n / 16, uppercase);
return (_putchar(hex_digits[n % 16]));
}
