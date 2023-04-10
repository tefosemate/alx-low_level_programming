#include <stdio.h>
/**
 * main - prints all argument it receives
 * @argc: number of arguments
 * @argv: number of arrays
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
