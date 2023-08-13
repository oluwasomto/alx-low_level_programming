#include <stdio.h>
#include "main.h"
/**
 * print_array - used to point and print and array;
 *
 * @a: pointer
 * @n: index of the array
 */

void print_array(int *a, int n)
{
	/* a = array; n = index */
	int i;

	for (i = 0; n > i; i++)
	{
		printf("%d", a[i]);
		if (n - 1 > i)
		{
			printf(", ");
		}
	}
	printf("\n");
}
