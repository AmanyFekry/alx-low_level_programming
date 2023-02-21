#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer
 * @n: digit to find the last place of.
 * $r: An integer input
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int r;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
