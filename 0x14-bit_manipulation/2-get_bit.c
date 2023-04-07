#include "main.h"

/**
 * get_bit - Value of a bit at a given index
 * @n: decimal parameter
 * @index: index
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;


	if (index > 64)
		return (-1);
	bit = n >> index;
	return (bit & 0x1);
}
