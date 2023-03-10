#include "main.h"

/**
 * main: print the number of arguments
 * @argc: number of arguments
 * @argv: number of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
		printf("%d\n", argc - 1);

		return (0);
}
