#include "main.h"
/*
 * main - checks for upper case alphabets
 * @c: The character in ASCII code
 *
 * Return: 1 for upper 0 for none
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
