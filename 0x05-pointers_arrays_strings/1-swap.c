#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a : integer 1
 * @b : integer 2
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
