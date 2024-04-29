#include "main.h"
#include <stdio.h>
/**
 * puts_half - this function prints the half of the string
 *
 * @str: the parameter that contains the value of the string
 *
 */

void puts_half(char *str)
{
	/* str = str */
	int index;
	int j;
	int n;

	for (index = 0; str[index] != '\0'; index++)
	{
	}
	n = (index - 1) / 2;
	for (j = n + 1; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
