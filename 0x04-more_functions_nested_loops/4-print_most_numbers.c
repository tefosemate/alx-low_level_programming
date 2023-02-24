#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((n == 2) || (n == 4))
		if ((i == 2) || (i == 4))
			continue;
			_putchar(i + '0');
			_putchar('\n');
		else
			_putchar(i + '0');
	}
			_putchar('\n');
}
