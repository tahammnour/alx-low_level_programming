#include "main.h"

/**
 * _strncpy - print depent on number char
 * @dest: pointer char
 * @src: pointer char
 * @n: return num with char to print
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
