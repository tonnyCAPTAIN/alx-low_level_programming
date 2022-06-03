#include <stdio.h>
/**
 * main - prints all posibles numbers from three digits
 * 
 * Return: always 0 (success)
 */
int main(void)
{
	int s, b, t;

	for (s = 0; s <= 9; s++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (t = 0; t <= 9; t++)
			{
				putchar(s + '0');
				putchar(b + '0');
				putchar(t + '0');

				if (s < 8)
				{
					 putchar(','); 
					 putchar(' '); 
				}

			        /*if (t > b && b > s)

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
				}*/
			}
		}
	}
	putchar('\n');
	return (0);
}
