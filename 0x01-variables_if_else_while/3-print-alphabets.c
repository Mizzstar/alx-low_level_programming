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
