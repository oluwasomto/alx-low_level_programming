#include <stdio.h>
/**
 * _strcat - this concates two arrays together
 *
 * @dest: the destination of the newly shifted elements
 * @src: the source of the shifted elements
 *
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	/* dest = s1, src = s2*/
	int s1;
	int s2;

	for (s2 = 0; dest[s2] != '\0'; s2++)
	{
	}

	for (s1 = 0; src[s1] != '\0'; s1++)
	{
		dest[s2] = src[s1];
		s2++;
	}
	src[s1] = '\0';

	return (dest);
}
