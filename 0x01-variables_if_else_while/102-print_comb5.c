#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int c, i, k, j;

	for (c = 48; c <=57; c++)
	{
		for (i = 48; i <=57; i++)
		{
			for (k = 48; k <=57; k++)
			{
				if (((k + j) > (c + i) && K >= c) || c < k)
				{
					putchar(c);
					putchar(i);
					putchar(' ');
					putchar(k);
					putchar(j);

					if (c + i + k + j == 227 && c == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
