#include "main.h"
#include <stdio.h>

/**
 * _strlen - determain the length of a string
 * @s:The pointer to the string
 * Return: the string length of s
 */
int _strlen(char *s)
{
	int i;
	int count;

	i = 0;
	count = 0;

	while (s[i] != 0)
	{
		count++;
		i++;
	}
	return (count);
}
