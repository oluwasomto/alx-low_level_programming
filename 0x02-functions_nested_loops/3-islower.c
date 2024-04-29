#include "main.h"
/**
 * _islower - this function prints a result if the text is a lowercase
 * and the it returns a result
 *
 * Return: the return value is the result
 *
 * @c: the variable of the parameter is in type-int due to the ascii
 * values of these letters
 */

int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	} else
	{
		result = 0;
	}

	return (result);
}
