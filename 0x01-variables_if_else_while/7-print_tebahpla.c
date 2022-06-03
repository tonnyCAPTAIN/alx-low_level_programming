#include <stdio.h>
#include <ctype.h>
/**
 * main -Main program printing alphabets in reverse order
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 'Z'; x >= 'A'; x--)
	{
		int lower_x = tolower(x);

		putchar(lower_x);
	}
	putchar('\n');
	return (0);
}
