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

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		sum = atoi(argv[k]);
		res += sum;
	}
	printf("%d\n", res);
	return (0);
}
