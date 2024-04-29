#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- a value of zero is returned to the main
 * Return: the return has a value of 0
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	 num = n % 10;

	if (num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	} else if (num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, num);
	} else
	{
		if ((num < 6) || (num > 0))
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
		}
	}
	return (0);
}
