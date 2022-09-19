#include "main.h"
/**
 * _puts - prints string from main
 * @str: string legnth
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
