#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Main Entry
 * @str: input
 * Return: 0
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int x, y;

	/* check is str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	nstr = malloc(sizeof(char) * (x + 1));

	/*check if malloc was successful*/
	if (nstr == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < x; y++)
	{
		nstr[y] = str[y];
	}
	nstr[x] = '\0';
	return (nstr);
}
