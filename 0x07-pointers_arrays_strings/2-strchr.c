#include "main.h"
/**
 * _strchr - main file
 * @s: input
 * @c: input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (0);
}

