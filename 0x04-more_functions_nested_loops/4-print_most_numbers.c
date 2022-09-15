#include "main.h"

/**
 * print_most_numbers - get number from 0 - 9
 * remove 2 and 4 from return numbers
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
