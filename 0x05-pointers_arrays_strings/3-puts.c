#include "main.h"

/**
 *_puts - this function prints the string of the parameter
 *
 * @str: this is the parameter used for dereferencing
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
