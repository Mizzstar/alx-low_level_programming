#include <stdio.h>
#include "main.h"

/**
 * main - prograam execution starts
 * @c: character to be checked
 * Description: this is the main function
 * Return: an integer to signify success or failure
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
