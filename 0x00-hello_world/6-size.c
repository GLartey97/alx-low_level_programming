#include <stdio.h>
/**
 * main - Entry
 * Initialize char, int, long int, long long int
 * Return: Always 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %i byte(s)", sizeof(c));
	printf("Size of a int: %i byte(s)", sizeof(i));
	printf("Size of a long int: %i byte(s)", sizeof(li));
	printf("Size of a long long int: %i byte(s)", sizeof(lli));
	printf("Size of a float: %i byte(s)", sizeof(f));
	return (0);
}
