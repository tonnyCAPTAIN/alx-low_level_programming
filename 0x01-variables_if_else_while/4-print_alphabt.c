#include <stdio.h>
/**
 * main - Prints alphabets in lower case
 * except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
