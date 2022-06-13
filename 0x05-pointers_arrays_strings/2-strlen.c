#include "main.h"
/**
 * _strlen- finds the legth of a string
 * @s: string
 * Return: not.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
