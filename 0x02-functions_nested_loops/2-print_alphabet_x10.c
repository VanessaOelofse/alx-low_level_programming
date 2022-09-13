#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Print alphabet 10 x
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i;

for (i = 0; i < 10; i++)
{
int v;
for (v = 'a'; v <= 'z'; v++)
{
putchar(v);
}
putchar('\n');
}
}
