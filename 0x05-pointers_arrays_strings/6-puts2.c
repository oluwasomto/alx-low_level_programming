#include <stdio.h>
#include "main.h"
/**
 * puts2 - the function prints the first character followed by even numbers
 *
 * @str: this parameter points at the first element in the array
 *
 * Return: no value is returned in this function
 */

void puts2(char *str)
{
	/* str = str */
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
