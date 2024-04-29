#include <stdio.h>
/**
 * main- the result should return a 0 value meaning success
 * Return: the value of the return is 0
 */
int main(void)
{
	int letter;

	letter = 'a';
		do {
			if (letter == 'e')
			{
				letter = letter + 1;
				continue;
			} else
			{
				if (letter == 'q')
				{
					letter = letter + 1;
					continue;
				}
			}
			putchar(letter);
			letter++;
		} while (letter <= 'z');
	putchar('\n');
	return (0);
}
