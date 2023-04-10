#include "main.h"
#include <stdlib.h>
/**
 * create_array - Main Entry
 * @size: input
 * @c: characters
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
		char *arr;
		unsigned int j;

		if (size == 0)
		{
			return (NULL);
		}

		arr = malloc(sizeof(char) * size);

		if (arr == NULL)
		{

			return (NULL);
		}

		for (j = 0; k < size; k++)
		{
			arr[k] = c;
		}

		return (arr);
}