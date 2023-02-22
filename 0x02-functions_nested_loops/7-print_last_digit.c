#include "main.h"

/**
 * print_last_digit - check the code
 * @a: parameter
 * Return: return last value.
 */
int print_last_digit(int a)
{
	int last;

	last = a % 10;

	if (last < 0)
	{
	last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
