#include <stdio.h>
/**
 * main- the return value will be zero to represent success
 * Return: the value to be returned is zero
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
