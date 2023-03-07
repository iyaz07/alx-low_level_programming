#include "main.h"
#include <stdio.h>
/**
 * _strchr - A function that locates a character within a string
 * @s: pointer
 * @c: parameter to be located in string
 * Return: return 0 always
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
		return (s + i);
		}
	}
	return (NULL);
}
