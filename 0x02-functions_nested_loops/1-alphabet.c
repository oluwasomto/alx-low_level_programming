#include "main.h"
/**
 * print_alphabet - print all the alphabets and a new line
 *
 */

void print_alphabet(void) /*the function for defining the loop for alphabets*/
{
	int letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
