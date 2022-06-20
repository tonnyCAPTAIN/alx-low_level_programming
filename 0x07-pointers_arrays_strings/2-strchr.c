#include "main.h"
/**
 * _strchr - Locates a character in a string
 *
 * @s: destination address
 * @c: source address
 * Return: return result
 */

char *_strchr(char *s, char c)
{
	usigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
