#include "main.h"
#define NULL 0

/**
 * _strchr - searching for character in a string
 * @s: paramenter string to scan
 * @c: parameter character to search for
 *
 * Return: Return 0
 */

char *_strchr(char *s, char c)
{
	int k = 0;

	while (s[k] != '\0' && s[k] != c)
		k++;

	if (s[k] == c)
		return (&s[k]);
	else
		return (NULL);
}
