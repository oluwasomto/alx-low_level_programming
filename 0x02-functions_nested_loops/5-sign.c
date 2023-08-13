#include "main.h"
/**
 * print_sign - this function prints the sign and returns the number
 * based on their sign
 *
 * Return: the value of the return is the result
 *
 * @n: the datatype of the parameter is the same to match the datatype
 * of the value its been called to and also the return type is int to
 * match the datatype of the returned value.
 *
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	} else if (n == 0)
	{
		_putchar('0');
		result = 0;
	} else
	{
		if (n < 0)
		{
			_putchar('-');
			result = -1;
		}
	}
	return (result);
}
