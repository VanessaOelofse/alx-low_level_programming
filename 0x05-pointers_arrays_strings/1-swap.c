#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: integer swap one
 * @b: integer swap two
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
