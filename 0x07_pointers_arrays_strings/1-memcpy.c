#include <stdio.h>
#include "main.h"
/**
 * _memcpy - function copies bytes from memory area src to memory area dest
 *
 * @dest: pointer for buffer
 * @src: pointer for buffer2
 * @n: number of bytes
 *
 * Return: returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
