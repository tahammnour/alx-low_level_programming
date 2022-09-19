#include "main.h"
/**
*_puts - display text from _puts with new line
*@str: pointer store in c var
*
*Return: nothing
*/

void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
_putchar (c[m]);
}
_putchar('\n');
}
