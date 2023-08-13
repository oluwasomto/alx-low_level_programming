#include <stdio.h>
/**
 * main- the value returned to the main is zero to signify success
 * Return: the returned value is zero
 */
int main(void)
{
	int num;

	num = '0';
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
