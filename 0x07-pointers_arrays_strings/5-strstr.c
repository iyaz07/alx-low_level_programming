#include "main.h"
#include <stdio.h>
/**
 * _strstr - A function to locate a substring
 * @haystack: pointer parameter
 * @needle: pointer parameter
 * Return: return 0 always
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (NULL);
}
