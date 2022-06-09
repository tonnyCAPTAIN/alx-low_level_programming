#include "main.h"
#include <stdio.h>
/**
 * _isupper - returns 1 if letter is uppercase
 * 0 if it is not
 *
 * Return: returns 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
