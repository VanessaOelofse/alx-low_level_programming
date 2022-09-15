#include "main.h"
#include <stdio.h>

/**
 * main - function that checks for a digit
 * @c: Integer
 * Return: Always 0.
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
