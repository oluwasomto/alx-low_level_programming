#include <stdio.h>
/**
 * _strncat - this function concates the two character strings
 * @dest: destination of the strings
 * @src: source of the strings
 * @n: number to be used as a condition for printing
 * Return: this function returns the destination to the main
 * function.
 */

char *_strncat(char *dest, char *src, int n)
{
	/* dest = s1, src = s2, n = number*/
	int s1, s2;

	for (s1 = 0; dest[s1] != '\0'; s1++)
	{
	}
	s2 = 0;
	while (src[s2] != '\0' && s2 < n)
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}

	dest[s1] = '\0';

	return (dest);
}
