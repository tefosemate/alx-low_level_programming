#include "main.h"
/**
 * prime_x - Main Entry
 * @x: input
 * @y: input
 * Return: 0
 */
int prime_x(int x, int b)
{
	if (x <= 1 || (x != y && a % y == 0))
	{
		return (0);
	}
	else if (x == y)
	{
		return (1);
	}
	return (prime_x(x, y + 1));
}

/**
 * is_prime_number - Main Entry
 * @n: input
 * Return: 0
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
