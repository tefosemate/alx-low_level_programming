#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = haystack;
		char *m = needle;

		while (*n == *m && *m != '\0')
		{
			n++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}

	return (0);
}
