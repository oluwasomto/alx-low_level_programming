#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times using a loop
 * since the return type is void there is no return value
 */

void print_alphabet_x10(void)
{
	int letter;
	int num;

	num = '0';

	while (num <= '9')
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		num++;
	}
}
