#include <stdio.h>
/**
 * print_numbers - this function prints digits from 0 to 9
 *
 * Return: always 0
 *
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
