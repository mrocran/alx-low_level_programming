#include "main.h"

/**
 * _islower - checks is the character is lowercase
 * Return: returns 1 and 0 depending on condition
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
