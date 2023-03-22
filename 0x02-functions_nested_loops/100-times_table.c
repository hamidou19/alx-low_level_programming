#include "main.h"
#include <stdio.h>

/**
 * print_times_table - function that prints numbers
 *
 *@n: function parameter
 *
 * Return: always 0
 */

void print_times_table(int n)
{
	char n;

	if (n <= 0 && n >= 15)
	{
		_putchar(", ");
	}
	_putchar("%d", n);
	_putchar("\n");
}
