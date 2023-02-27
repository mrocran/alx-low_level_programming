#include "main.h"

/**
 * swap_int - swaps the values of two integer
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
