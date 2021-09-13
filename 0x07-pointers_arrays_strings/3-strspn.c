#include "main.h"

/**
 * _strspn - length of prefix subtring
 * @s: parameter string to check
 * @accept: parameter to accept
 *
 * Return: Number of byte
 */

unsigned int _strspn(char *s, char *accept)
{
	int j = 0, k;
	int same = 0;

	while (s[j] != '\0')
	{
		for (k = 0; acxept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				same++;
				break;
			}
			if (accept[k + 1] == '\0' && s[j] != accept[k])
				return (same);
		}
		j++;
	}
	return (same);
}
