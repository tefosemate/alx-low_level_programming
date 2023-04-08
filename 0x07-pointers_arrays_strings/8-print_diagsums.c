#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int c, sum1 = 0, sum2 = 0;

	for (c = 0; c < size; c++)
	{
		sum1 += a[c];
		sum2 += a[size - c - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
