#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to be checked
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
