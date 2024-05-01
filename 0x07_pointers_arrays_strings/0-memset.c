#include "main.h"

/**
 * _memset - this function fills memory with a constant byte
 *
 * @s: the pointer holding the address of the value
 * @b: the value which is to be changed
 * @n: the number of byte that is to be filled
 *
 * Return: the function returns the pointer
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
	_putchar('\n');

}
