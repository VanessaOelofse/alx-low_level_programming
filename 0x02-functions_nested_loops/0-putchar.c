#include <stdio.h>
#include "main.h"

/**
 *main - Writes _putchar with new line
 *
 *Return: Always 0
 */

int _putchar(char *s);
{
char *s="_putchar\n";
while (*s)
{
putchar(*s++);
}
return 0;
}
