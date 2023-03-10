#include "main.h"
#include <stdio.h>

	int _strlen_recursion(char *s);
	int _compare(char *s, int n1, int n2);

/**
 * _strlen_recursion - returns the string length of parameter
 * @s: parameter
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * _compare - compares each character of the string
 * @s: string
 * @n1: least iterator
 * @n2: most iterator
 * Return: 0 always
 */
int _compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + _compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - chare if string is a palindrome
 * @s: paramer to be checked
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compare(s, 0, _strlen_recursion(s) - 1));
}
