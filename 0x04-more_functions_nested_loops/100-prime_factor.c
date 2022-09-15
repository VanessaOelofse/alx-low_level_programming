#include <stdio.h>
#include "main.h"
/**
 * main - Print factors of 100
 *
 * Return: returns 0
 */
int main(void)
{
unsigned int a = 2;
unsigned long n = 612852475143;
while (a != n)
{
if (n % a == 0)
{
n = n / a;
} else
{
a++;
}
}
printf("%lu\n", n);
return (0);
}
