#include <stdio.h>

/**
 * main - prints a programs name
 * @argc: size of argument
 * @argv: array
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
