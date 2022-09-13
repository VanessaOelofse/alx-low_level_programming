#include "main.h"

/**
 * jack_bauer - prints time
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
int i, v;
for (i = 0; i < 24; i++)
{
for (v = 0; v < 60; v++)
{
_putchar(i / 10 + 48);
_putchar(i % 10 + 48);
_putchar(':');
_putchar(v / 10 + 48);
_putchar(v % 10 + 48);
_putchar('\n');
}
}
}
