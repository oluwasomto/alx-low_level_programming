#include <stdio.h>
/**
 * _strncpy - this function copies from src to dest
 *
 * @dest: destination of the strings
 * @src: source of the strings
 *
 * @n: the number used to direct the printing
 * Return: the function returns the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* dest = s1; src = string; n= number*/
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
