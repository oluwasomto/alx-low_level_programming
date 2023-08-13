#include <stdio.h>
/**
 * main- a value is returned in putchar
 * Return: the return value is 0
 */
int main(void)
{
	int letter;
	int alpha;

		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		for (alpha = 'A'; alpha <= 'Z'; alpha++)
			putchar(alpha);

	putchar('\n');
	return (0);
}

