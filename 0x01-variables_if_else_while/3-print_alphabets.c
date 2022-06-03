#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints alphabets in lower then upper case
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		int lower_x = tolower(x)

		putchar(lower_x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
