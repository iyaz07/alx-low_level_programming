#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *rev_string - print string in reverse
 *@s: parameter
 *
 *Return: returns void
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char temp;

	while(s[i++]);
	len++;

	for (i = len -1; i >= len / 2; i--)
	{
		temp = s[i];`
		s[i] = s[len -i - 1];
		s[len - i - 1] = temp;
	}



}
