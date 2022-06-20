#include "main.h"
/**
 * _strspn - gets prefix length
 * @s: string
 * @accept: contains bytes that may or may not compose parts of the string
 * Return: the number
 */

unsigned int _strspn(char *s, char *accept)
{
	int j;
	int i;

	unsigned int length;
	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			if (s[i] == accept[j])
				length++;
		if (accept[j] == '\0')
			return (length);
	}
	return (length);
}
