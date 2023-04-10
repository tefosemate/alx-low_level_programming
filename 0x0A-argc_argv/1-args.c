#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments that are passed to program
 * @argc: number of arguments
 * @argv: number of arrays
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
