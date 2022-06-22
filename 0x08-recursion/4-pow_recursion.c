#include "main.h"
/**
 * _pow_recursion- returns the power of x to y
 * @x: INput
 * @y: power
 * Return: value after power raised
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
