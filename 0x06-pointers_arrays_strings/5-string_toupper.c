#include <stdio.h>
/**
 * string_toupper - this function changes lowercase letters to uppercase
 *
 * @str: this points to the array in the main function
 *
 * Return: returns str
 *
 */

char *string_toupper(char *str)
{
	/* * = str*/
	int j;
	int ch = 'a' - 'A';

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] -= ch;
		}

	}
	return (str);
}
