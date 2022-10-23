#include "main.h"

/**
 * _print-numbers - printing numbers
 * Return: Always 0
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar(a++ + '0');

	_putchar('\n');
}
