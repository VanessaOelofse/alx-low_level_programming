#include "main.h"
#include <stdio.h>

/**
 * _islower(int c) - Checks lower case
 *
 * Return: Always 0.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
