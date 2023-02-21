#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: character argument
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (x < 0)
		x * = -1;
	x = n % 10;
	_putchar(x + '0');
	return (0);
}
