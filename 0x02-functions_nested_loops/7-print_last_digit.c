#include "main.h"
/**
 * main - check the code
 * @n: digit to find the last place of.
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: The last digit
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
