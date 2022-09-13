#include "main.h"
#include <stdio.h>

/**
 * _islower - Checks lower case of C
 * @c: The character to print
 * Return: 1 if true else 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
