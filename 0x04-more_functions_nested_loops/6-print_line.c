#include "main.h"

/**
 * print_line - Draws a straight line using a character
 * @n: the number of _ character to be printed out.
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
	for (line = 0; line <= n; line++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
}
