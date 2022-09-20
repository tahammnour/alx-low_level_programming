#include "main.h"
/**
 * print_rev - print char with revrese
 * @s: pointer type char
 * Return: nothing
*/
void print_rev(char *s)
{
	int m  =  0;

	while (s[m])
	{
		m++;
	}
	while (m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
