#include "main.h"
/**
 * _strcmp - function to compare two strings
 * @s1: string value
 * @s2: string value
 * Return: compared value of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
