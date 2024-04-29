#include <stdio.h>
/**
 * leet - this function changes character strings to numbers
 *
 * @s: this is the pointer to the main array
 *
 * Return: this function returns the value of s pointer
 */

char *leet(char *s)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}

	return (s);
}
