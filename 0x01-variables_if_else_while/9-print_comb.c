#include <stdio.h>
#include <stdlid.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar('.');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
