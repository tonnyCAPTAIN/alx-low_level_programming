#include <stdio.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory
 * @b: argument count
 * Return: return 98
 */

void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
