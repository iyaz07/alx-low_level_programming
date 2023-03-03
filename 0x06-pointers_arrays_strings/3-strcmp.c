#include "main.h"
#include <stdio.h>
/**
* _strcmp - A function that compares two strings
* @s1: first param
* @s2: second param
* Return: return is result
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
