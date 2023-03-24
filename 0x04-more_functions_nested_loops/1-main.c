#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *_isdigit - checks if a character is a digit
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
