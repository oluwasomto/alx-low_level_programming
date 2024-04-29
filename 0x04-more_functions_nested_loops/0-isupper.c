#include <stdio.h>
/**
 * _isupper- checks the code
 *
 * Return: always the value of num
 *
 * @c: the parameter c contains the value of the main
 * function in which this function will be used
 */

int _isupper(int c)
{

	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	return (0);
}
