#include "main.h"
/**
 * _isalpha - the code uses an and operator to make sure that all
 * rules are obeyed for the result to return a value
 *
 * Return: the return value is the result of the if statement
 *
 * @c: the datatype of the parameter is int due to the ascii values
 * of letters and the return type also int as a due to the datatype
 * of the returned result
 */
int _isalpha(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	} else if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	} else
	{
		result = 0;
	}
	return (result);
}
