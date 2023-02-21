#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase.
 * Return: Always 0
 */

void print_alphabet(void)
{

	int lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{

		_putchar(lc);
	}
	_putchar('\n');
	return (0);
}
