#include <stdio.h>

void print_to_98(int n)
{
	int sum = 98;
	while (n > sum)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d \n", sum);
	while (n < sum)
	{
		printf("%d, ", n);
		n++;
	}
	printf("%d \n", sum);
}
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
