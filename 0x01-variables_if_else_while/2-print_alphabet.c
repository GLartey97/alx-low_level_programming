#include <stdio.h>
/**
 * main - print alphabets in lowercase
 * initialize c
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
