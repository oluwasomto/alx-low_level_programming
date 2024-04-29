#include <stdio.h>
/**
 * _isdigit - a function that returns 1
 *
 * @c: function coverts from char to int
 *
 * Return: the function returns 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
