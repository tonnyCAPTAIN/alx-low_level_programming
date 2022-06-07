#include "main.h"
/**
 * main - Prints alphabets in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	int a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
		if (a == 123)
			break;
	}
	_putchar('\n');
}
