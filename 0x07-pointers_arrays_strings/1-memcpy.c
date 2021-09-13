#include "main.h"

/**
 * _memcpy - copying a block of memory
 * @dest: parameter to transfer to
 * @src: parameter to transfer from
 * @n: parameter size
 *
 * Return: Returns a memory cooied to
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}
	return (dest);
}
