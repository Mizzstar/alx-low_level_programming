#include <stdio.h>
#include "main.h"

int get_length(char *);

/**
 * re_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Return: void
 */
void re_string(char *s)
{
	int length;
	int i;
	int j;

	length = get_length(s);

	for (i = 0, j = length - 1; !(i >= j); i++, j--)
	{
		char temp;

		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

/**
 * get_length - returns length of String
 * @s: String whose length we wish t determine
 *
 * Return: Length of String
 */
int get_length(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (s[i] != '\n')
	{
		++length;
		i++;
	}

	return (length);
}
