#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	
	putchar('\n');

	return (0);
}
