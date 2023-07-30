#include "main.h"

/**
 * rot13 - rot13 encoding
 * @s: string
 * Return: Pointer to string
 */
char *rot13(char *s)
{
	char alpha13[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	char rot13[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i = 0, j;

	while (s[i] != 0)
	{
		char c = s[i];

		for (j = 0; j < 52; j++)
		{
			if (c == alpha13[j])
			{
				s[i] = rot13[j];
			}
		}
		i++;
	}
	return (s);
}
