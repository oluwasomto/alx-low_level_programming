#include "main.h"

/**
 *swap_int - this function swaps the numbers
 *
 * @a: the integer to be swapped
 * @b: another integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int cap = *a;
	*a = *b;
	*b = cap;
}
