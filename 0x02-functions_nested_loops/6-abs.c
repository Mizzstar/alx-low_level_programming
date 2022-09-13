#include <stdio.h>
#include "main.h"

/**
 * _abs-computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int_abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
