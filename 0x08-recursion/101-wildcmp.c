#include "main.h"
#include <stdio.h>

/**
 * wildcmp - A function to compare two stringss
 * @s1: String 1
 * @s2: string 2
 * Return: 1 if identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0') && (*s2 == '\0'))
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2));
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
