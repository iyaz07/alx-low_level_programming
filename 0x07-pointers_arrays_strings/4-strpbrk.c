#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps two different pointer parameters
 * @s: first param
 * @accept: second param
 * Return: return S or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
