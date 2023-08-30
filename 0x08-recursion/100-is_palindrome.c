#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - checks if a word spell the same forward and backward.
 * @str: Parameter to be checked
 * Return: 0 if palindrome and 1 otherwise
 */

int is_palindrome(const char *str)
{
	int len = strlen(str);

	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - i - 1])
		{
			return (0);/* Not a palindrome*/
		}
	}
	return (1);/*Palindrome*/
}
