#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num <10)
		{
			putchar('0' + num);
		}
		else if (num >= 10)
		{
			putchar('a' + num % 10);
		}
	}
	putchar('\n');
	return (0);
}
