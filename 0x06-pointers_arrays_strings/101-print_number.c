#include <stdio.h>
/**
 * print_number - function prints out integers
 *
 * @n: contains values to be printed
 */

void print_number(int n)
{

	int x;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	x = n;

	if (n / 10)
		_putchar(n / 10 + '0');

	_putchar(x % 10 + '0');

}
