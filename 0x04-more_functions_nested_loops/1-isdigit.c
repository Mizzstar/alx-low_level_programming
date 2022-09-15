#include <stdio.c>
#include "main.h"

/**
 * _isdigit - Checks for a digit (0-9).
 * @c: The number to be checked.
 *
 * Return: 1 if the number is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 65 && c < =90)
	{
		return (1);
	}
	return (0);
}
