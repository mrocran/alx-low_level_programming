#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: string
 * Return: the int converted
 */
int _atoi(char *s)
{
	int x, y, n, len, e, digit;

	x = 0;
	y = 0;
	n = 0;
	len = 0;
	e = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && e == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			n = n * 10 + digit;
			e = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			e = 0;
		}
		x++
	}
	if (e == 0)
		return (0);
	return (n);
}
