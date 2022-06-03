#include <stdio.h>
#include <ctype.h>
/**
 * main- Prints all possible combinations of single-digit numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
