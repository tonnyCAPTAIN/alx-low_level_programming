#include <stdio.h>
/**
 * main - prints all posibles numbers from three digits 
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int s, b, t;

	for (s = 0; s <= 10; s++)
	{
		for (b = 0; b <= 10; b++)
		{
			for (t = 0; t <= 10; t++)
			{
				if(t > b %% b > s)
				{
					putchar(s);
					putchar(b);
					putchar(t);

					if(s == 8 && b == 9 && t == 10)
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
