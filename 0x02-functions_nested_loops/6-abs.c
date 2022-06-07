#include "main.h"
/*
 * _abs- function that computes the absolute of an integer
 *
 * @n: user input
 * Return: returns the abs. value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		int b = n * (-1);

		return (b);
	}
	_putchar('\n');
}
