#include "main.h"
/**
 * _abs - the function returns the absolute value of the parameter
 * from where it is been called
 *
 * Return: the return value is the result obtained by the data type
 * of the parameter
 *
 * @num: the datatype of the parameter is int
 *
 */
int _abs(int num)
{
	if (num < 0)
	{
		num = num * -1;
	}
	return (num);
}
