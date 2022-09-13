#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Writes _putchar with new line
 *
 *Return: Always 0
 */

int main(void)
{
char *s="_putchar\n";
while (*s)
{
putchar(*s++);
}
return 0;
}
