#include "main.h"

/**
* _print_string - Prints a string.
* @str: The string to print.
* Return: The number of characters printed.
*/
int _print_string(char *str)
{
int i = 0;

if (str == NULL)
str = "(null)";

while (str[i])
{
_putchar(str[i]);
i++;
}

return (i);
}

