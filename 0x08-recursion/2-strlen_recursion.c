#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns lenght of a string
 * @s: parameter
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (_strlen_recursion(s) + 1);
}
