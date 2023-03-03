#include "main.h"
#include <stdio.h>
/**
 * _strncpy - A function to copy one string to the other
 * @dest: returned result
 * @src: string to be appended
 * @n: number of bytes too be appended
 * Return: return result of cpy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int p = 0;

	while (src[i++])
		p++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = p; i < n; i++ )
		dest[i] = '\0';

	return (dest);

}
