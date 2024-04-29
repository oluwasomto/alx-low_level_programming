#include "main.h"

/**
 * _strlen - the function returns the lenght of a string
 * @s: the parameter of the function
 *
 * Return: the return value is the value of the function
 *
 */

int _strlen(char *s)
{
	int value = 0;

	while (*s++)
	{
		value++;
	}

	return (value);
}
