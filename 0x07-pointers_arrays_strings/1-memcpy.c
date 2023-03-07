#include "main.h"
/**
 * _memcpy - A function to copy memory location from source to dest
 * @dest: Destination
 * @src: Copy sorce
 * @n: bytes
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
