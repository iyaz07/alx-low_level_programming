#include "main.h"
 /**
 * _strspn - A function to get the lenght of a prefix substring
 * @s: pointer
 * @accept: second parameter
 * Return: returns the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, value, check;
	
	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if(accept[j] == s[i])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
	}
	return (0);
}
