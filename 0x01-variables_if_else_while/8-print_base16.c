#include <stdio.h>

/**
*main - Prints all single digits of base 16 followed by new line
*
*Return: returns 0
*/
int main(void)
{
int digit;
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
if (digit == '9')
{
digit = 'a';
for (; digit <= 'f'; digit++)
{
putchar(digit);
}
}
}
putchar('\n');
return (0);
}