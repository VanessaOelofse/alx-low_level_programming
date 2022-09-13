#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: Integer
 * Return : Last value
 */
int print_last_digit(int n)
{
int r;
if (n < 0)
{
r = -1 * (n % 10);
_putchar(r + '0');
return (r);
}
else
{
r = n % 10;
_putchar(r + '0');
return (r);
}
}
