#include "main.h"
/**
 * _strlen - get length char 
 * @s: pointer char
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
