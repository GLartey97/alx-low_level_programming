#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: int parameter
 * @argv: array parameter
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int result = 0, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
