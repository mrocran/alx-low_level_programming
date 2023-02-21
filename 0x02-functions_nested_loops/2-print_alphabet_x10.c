#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times.
 */

void print_alphabet_x10(void)
{

	int ten;
	int lc;

	for (ten = 0; ten < 10; ten++)
	{

		for (lc = 'a'; lc <= 'z'; lc++)
		{

			_putchar(lc);
		}
	_putchar('\n');
	}
}
