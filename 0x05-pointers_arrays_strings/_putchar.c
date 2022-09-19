#include <unistd.h>
/**
 * _putchar - write char to print
 * @c: char to print
 * Return: value of num
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
