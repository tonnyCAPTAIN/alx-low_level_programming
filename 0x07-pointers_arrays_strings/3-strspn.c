#include "main.h"
/**
 * _strspn - gets prefix length
 * @s: string
 * @accept: contains bytes that may or may not compose parts of the string
 * Return: the number
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, f, _myFlag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_myFlag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				_myFlag = 1;
			}
		}
		if (_myFlag == 0)
		{
			return (f);
		}
	}
	return (0);
}
