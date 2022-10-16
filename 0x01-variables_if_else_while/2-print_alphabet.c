#include <stdio.h>

/**
 * main - print aplphabet in lower cases
 * Return ; always 0
 */
int main(void)
{
	char LC;

	for (LC = 'a'; LC <= 'z'; LC++)
	{
		putchar(LC);
	}
	putchar('\n');
	return (0);
}
