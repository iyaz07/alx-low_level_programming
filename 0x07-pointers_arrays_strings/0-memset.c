#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: bytes
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
