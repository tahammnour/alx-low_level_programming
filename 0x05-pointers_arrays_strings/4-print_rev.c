#include "main.h"
/**
 * print_rev - print char with revrese
 * @s: pointer type char
 * Return: nothing
*/
void print_rev(char *s)
{
int i = 0;
while (s[i])
	i++;

while (i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}
