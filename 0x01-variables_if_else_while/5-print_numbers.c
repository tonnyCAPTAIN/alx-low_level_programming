#include <stdio.h>
/**
 * main - Prints numbers base 10 from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
