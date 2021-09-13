#include "main.h"
#include <string.h>

/**
 * _memset - filling memory with constant bytes
 * @s: parameter to print
 * @b: parameter for the constant
 * @n: parameter bytes for the memset
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (s);
}
