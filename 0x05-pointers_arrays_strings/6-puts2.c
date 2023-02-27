#include "main.h"

/**
 * puts2 - print every other character of a string, starting with
 * the first character followed by a new line.
 * @str: string
 */
void puts2(char *str)
{
	int ln = 0;
	int t = 0;
	char *a = str;
	int b;

	while (*a != '\0')
	{
		a++;
		ln++;
	}
	t = ln - 1;
	for (b = 0; b <= t; b++)
	{
		if (b % 2 == 0)
		{
		_putchar(str[b]);
		}
	}
	_putchar('\n');
}
