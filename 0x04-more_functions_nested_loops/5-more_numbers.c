#include "main.h"
/**
 * more_numbers - prints digits 0 - 9
 *
 */
void more_numbers(void)
{
	int c, n;

	for (c = 0; c < 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
