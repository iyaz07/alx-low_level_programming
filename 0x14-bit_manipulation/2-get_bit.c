#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int get_bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	get_bit = (n >> index) & 1;

	return (get_bit);
}
