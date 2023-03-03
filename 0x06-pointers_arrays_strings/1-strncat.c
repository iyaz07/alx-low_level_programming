#include "main.h"
#include <stdio.h>
/**
 * _strncat - a function that copies one string to the other
 * @dest: destination.
 * @src: source
 * @n: inputted number of bytes
 * Return: Return the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int p = 0;
	int i = 0;

	while (dest[i++])
	{
	p++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
	dest[p++] = src[i];
	}
	return (dest);
}
