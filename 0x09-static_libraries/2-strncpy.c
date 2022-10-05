#include "main.h"

/**
 * _strncpy - copies n bytes of src to the dest string
 * @dest: string to copy to
 * @src: string being copied 
 * @n: largest number of bytes to copy
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	i = 0;
	for (i =0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
