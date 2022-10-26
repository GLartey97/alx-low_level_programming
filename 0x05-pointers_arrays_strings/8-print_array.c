#include "main.h"

/**
 * print_array - print arrays
 * @a: pointer arr
 * @n: size of arr
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		ptintf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
