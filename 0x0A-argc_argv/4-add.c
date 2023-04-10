#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Add two numbers
 * @argc: number of arguments
 * @argv: number of arrays
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum;
	int count;
	int m;

	count = 1;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (m = 0; argv[count][m] != '\0'; m++)
		{
			if (!(isdigit(argv[count][m])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}

