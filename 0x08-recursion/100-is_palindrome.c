#include <stdio.h>
#include <string.h>
/**
 * isPalindromeRecursive - Helper func
 * @str: Parameter to be checked
 * @start: first index
 * @end: last index
 * Return: 0 if palindrome and 1 otherwise
 */

int isPalindromeRecursive(char *str, int start, int end)
{
	if (start >= end)
	{
		return (1);  /*Base case: All characters have been compared*/
	}
	if (str[start] != str[end])
	{
		return (0);  /*Characters at symmetric positions are different*/
	}
	return (isPalindromeRecursive(str, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a word spell the same forward and backward.
 * @str: Parameter to be checked
 * Return: 0 if palindrome and 1 otherwise
 */

int is_palindrome(char *str)
{
	int len = strlen(str);

	return (isPalindromeRecursive(str, 0, len - 1));
}

