#include "main.h"

/**
* print_alphabet_x10 - check the code.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	char hi, hey;

	for (hi = 1; hi <= 10; hi++)
	{
		_putchar('\n');
		for (hey = 'a'; hey <= 'z'; hey++)
		{
			_putchar(hey);
		}
	}
	_putchar('\n');
}
