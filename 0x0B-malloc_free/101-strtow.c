#include "main.h"

/**
 * word_count - counts the number of words
 * @s: string
 * Return: number of words
 */

int word_count(char *s)
{
	int f = 0, w = 0, c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
		{
			f = 0;
		}
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - splits strings into words
 * @str: string
 * Return: word
 */

char **strtow(char *str)
{
	char **results, *tmp;
	int i, words, start, end, j = 0, len = 0, c = 0;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);
	results = (char **) malloc(sizeof(char *) * (words + 1));
	if (results == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				results[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	results[j] = NULL;
	return (results);
}
