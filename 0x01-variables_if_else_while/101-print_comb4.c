#include <stdio.h>
/**
 * main - prints all posibles numbers from three digits 
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int s, b, t;

	for (s = 11; s <= 21; s++)
	{
		for (b = 11; b <= 21; b++)
		{
			for (t = 11; t <= 21; t++)
			{
				if (t > b && b > s)
				{
					putchar(s);
					putchar(b);
					putchar(t);

					if (s == 19 && b == 20 && t == 21)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
