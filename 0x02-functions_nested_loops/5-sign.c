#include "main.h"
/**
 * print_sign - return value 1 0 -1
 * @n: param int
 * Description: print + - 0
 * Return: only int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
