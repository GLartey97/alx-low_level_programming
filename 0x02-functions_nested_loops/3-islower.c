#include "main.h"
/**
 * _islower - checks if character is lower
 * @c:  integer parameter for _islower
 * Return: returns 1 if lower else 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
