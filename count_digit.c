#include "main.h"
#include <stdarg.h>

/**
 * count_digit - counts digits to be printed
 * @n: the variable digit to be printed
 *
 * Description: the function that prints the number of digits
 * Return: string of digits
 */

int count_digit(int n)
{
	int count = 0;

	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
