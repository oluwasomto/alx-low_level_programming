#include "main.h"
/**
 * print_last_digit - the function prints the last number with modulo ten
 *
 * Return: the return value is the result of the modulo
 *
 * @num: the parameter of the function and with the datatype
 *
 */

int print_last_digit(int num)
{
	int cal;

	cal = num % 10;
	if (cal <= 0)
	{
		cal = cal * -1;
	}
	_putchar('0' + cal);
	return (cal);
}
