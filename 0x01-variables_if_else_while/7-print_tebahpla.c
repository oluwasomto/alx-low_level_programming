#include <stdio.h>
/**
 * main- the value returned to the main is zero which signifies a success
 * Return: the value returned is zero
 */
int main(void)
{
	int alpha;

	alpha = 'z';
	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
