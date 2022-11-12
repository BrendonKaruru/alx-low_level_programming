#include " main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * _putchar only 3 times
 * Return: Always 0
 */
void more_numbers(void)
{
	int b, a;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
