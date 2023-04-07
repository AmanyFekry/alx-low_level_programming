#include "main.h"
/**
 * flip_bits - Flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flip = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if ((m & 1) != (n & 1))
			flip += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (flip);
}
