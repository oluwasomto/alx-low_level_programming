#include <stdio.h>
#include "main.h"

/**
 * _strchr - this function returns the first occurence of the character
 * @s: a pointer holding the characters
 * @c: the variable holding the character that is compared
 *
 * Return: function returns Null if not found or remaining characters if found
 */

char *_strchr(char *s, char c)
{
	unsigned int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + 2);
		}
		if (s[index] == 0)
		{
			return (NULL);
		}
	}

}
