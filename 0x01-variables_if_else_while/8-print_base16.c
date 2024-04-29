#include <stdio.h>
/**
 * main- zero value is returned to the main to represent success
 * Return: the return value is zero
 */
int main(void)
{
	int num;
	int alpha;

	num = '0';
	alpha = 'a';

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
