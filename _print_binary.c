#include "main.h"

/**
* _print_binary - Converts an unsigned int argument to binary and prints it.
* @args: A va_list of arguments containing the unsigned int to be printed.
* @printed: A pointer to the number of characters printed so far.
*
* Return: The number of characters printed.
*/
int _print_binary(va_list args, int *printed)
{
unsigned int num = va_arg(args, unsigned int);
int binary[32];
int i, count = 0;

if (!num)
return (_putchar('0'));

for (i = 0; num > 0; i++)
{
binary[i] = num % 2;
num /= 2;
}

for (i = i - 1; i >= 0; i--)
{
count += _putchar(binary[i] + '0');
*printed += 1;
}

return (count);
}

