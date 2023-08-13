#include <stdio.h>
#include "main.h"
/**
 * _strcpy - this function copies from one array to another
 *
 * Return: the return of this function is the dest array
 *
 * @dest: a pointer which is used as an array to copy from
 * the src pointer.
 *
 * @src: a pointer which stores the elements of the array in
 * the main function.
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
