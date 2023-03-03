#include "main.h"
#include <stdio.h>

/**
 *_strcat - A function that concatenates two strings
 *@dest: first param
 *@src: second param
 *Return: returns the result
 */
char *_strcat(char *dest, char *src)
{
	int p = 0, i;

	while (dest[p])
	{
		p++;
	}
		for (i = 0; src[i] != 0; i++)
		{
			dest[p] = src[i];
			p++;
		}
	dest[p] = '\0';
	return (dest);
}
