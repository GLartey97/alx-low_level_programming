#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers
 * @argc: int parameter
 * @argv: array parameter
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int res = 0, sum, i, j, k;

	if (argc == 1)
		printf("0\n");

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%s\n", "Error");
			return (1);
		}
	}

	for (k = 0; k < argc; k++)
	{
		sum = atoi(argv[k]);
		res += sum;
	}
	printf("%d\n", sum);
	return (0);
}
