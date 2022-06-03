#include <stdio.h>
/**
 * main - prints combination of two digits
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = x+1; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');

			if (y < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0):
}
