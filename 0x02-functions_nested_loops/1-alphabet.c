#include "main.h"
/*
 * main - Prints alphabets in lower case
 *
 * Return: void
 */
void alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
