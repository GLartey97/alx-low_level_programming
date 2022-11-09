#include "main.h"

int atoi(char *str)
{
	int res = 0, i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		res = res * 10 + str[i] - '0';
	}
	return (res);
}
