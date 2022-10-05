#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies a string pointed to by src to buffer pointed to by dest
 * @src: source to copy
 * @dest: destination of copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
