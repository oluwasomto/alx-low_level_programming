#include <stdio.h>
/**
 * reverse_array - function reverses the array
 *
 * @a: the variable holding the array
 * @n: the index of the array
 *
 */

void reverse_array(int *a, int n)
{
	/* a = a ; n = sizeof(a) / sizeof(int);*/
	int j;
	int tmp;
	int i;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		j--;
	}
}
