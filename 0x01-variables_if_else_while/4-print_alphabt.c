#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print alphabet without e and q
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'q' || letter == 'e')
{
continue;
}
putchar(letter);
}
putchar('\n');
return (0);
}
