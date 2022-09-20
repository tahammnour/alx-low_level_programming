#include "holberton.h"
/**
 * puts_half - print half string
 * @str: pointer char
 * Return: nothing
*/

void puts_half(char *str)
{
int len = 0;
for (len = 0; str[len] != '\0'; len++)
;

for (int i = (len + 1) / 2; str[i] != '\0'; i++)
{
	_putchar(str[i]);
}
_putchar('\n');
}

