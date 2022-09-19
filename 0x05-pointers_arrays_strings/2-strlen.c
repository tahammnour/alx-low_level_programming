#include "main.h"
#include <string.h>
/**
* _strlen - get length of a string
* @s: pointer to get length
* Return: returns length
*/
int _strlen(char *s)
{
	int len;

	for(; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
