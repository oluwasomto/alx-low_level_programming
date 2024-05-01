#include <stdio.h>
#include "main.h"

/**
 * _strspn - returns the number of byte after comparison
 *
 * @s: pointer for destination
 * @accept: pointer holding bytes for comparison
 *
 * Return: return the number of bytes compared
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index;
	unsigned int number;
	unsigned int value = 0;

	for (index = 0; s[index] != ' '; index++)
	{
		number = 0;
		while (accept[number] != '\0')
		{
			if (s[index] == accept[number])
			{
				value++;
			}
			number++;
		}
	}
	return (value);
}
