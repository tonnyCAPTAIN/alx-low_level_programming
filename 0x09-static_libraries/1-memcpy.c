#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @dest:memory area copied to
 * @src: memory area copied from
 * @n: number of bytes to be copied
 * return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

