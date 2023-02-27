#include "main.h"

/**
 *rev_string - function that reverses a string
 *@s: string
 * Return: string
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counte] != '\0')
	{
		counter++;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
