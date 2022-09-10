#include <stdio.h>

/**
 * main - print alphabet upper and lower
 *
 * Return: zero
 */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchart (ch);
	for (CH = 'A' <= 'Z'; CH++)
		putchar('\n');
	return (0);
}
