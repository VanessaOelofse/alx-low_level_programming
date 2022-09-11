#include <stdio.h>
/**
*main - Prints all combinations of two digits with,
* and space followed by new line
*
*Return: returns 0
*/
int main(void)
{
int digit1, digit2, digit3, digit4;
for (digit1 = '0'; digit1 <= '9'; digit1++)
{
for (digit2 = '0'; digit2 <= '9'; digit2++)
{
for (digit3 = '0'; digit3 <= '9'; digit3++)
{
for (digit4 = digit3+1; digit4 <= '9'; digit4++)
{
putchar(digit2);  
putchar(digit3);
putchar(' ');
putchar(digit1);  
putchar(digit4);
if (!(digit1 == '9' && digit2 == '9' && digit3 == '8' && digit4 == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
