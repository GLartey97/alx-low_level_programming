#include <stdio.h>

/**
 * main - prints a programs name
 * @argc: size of argument
 * @argv: array
 * Return: Always 0
 */

void main(argc, **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
