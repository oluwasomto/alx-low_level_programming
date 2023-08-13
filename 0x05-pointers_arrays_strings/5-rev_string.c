#include <stdio.h>
/**
 * rev_string - prints the reverse of the array
 *
 * Return: returns nothing
 *
 * @s: the pointer points to the first element of the array
 * then is used to point to the last element in the array.
 */

void rev_string(char *s)
{
	/* s = &s[10] */
	int index;
	int j;
	int i;
	char ch1, ch2;

	for (index = 0; s[index] != '\0'; index++)
	{
	}

	j = index - 1;
	i = 0;
	while (j >= i)
	{
		ch1 = s[i];
		ch2 = s[j];
		s[i] = ch2;
		s[j] = ch1;
		i++;
		j--;
	}
}
