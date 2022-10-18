#include "main.h"

/**
 * main - printing the alphabet in lower cas 10 times
 * print_alphabet_x10 - printing alpbabet 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
