#include "main.h"

/**
 * print_line - draws a straight line according to the parameter
 * @n: the number of line to draw
 * Return: empty
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	_putchar(86);
	}
	_putchar('\n');
	}
}
