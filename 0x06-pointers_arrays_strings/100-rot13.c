#include <stdio.h>
/**
 * rot13 - converts the string
 *
 * @s: pointer to the main array
 * Return: returns s
 */

char *rot13(char *s)
{
	int delt;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (delt = 0; a[delt] != '\0'; delt++)
		{
			if (s[j] == a[delt])
			{
				s[j] = b[delt];
				break;
			}
		}
	}
	return (s);
}
