#include <stdio.h>
#include "main.h"
/**
 * main- prints all arguments it receives
 * @argc: count argument
 * @argv: array argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
