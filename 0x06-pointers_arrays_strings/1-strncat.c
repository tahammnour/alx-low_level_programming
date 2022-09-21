#include "main.h"

/**
 * _strncat - link char src  dest char
 * @dest: pointer param
 * @src: ponter param
 * @n: number to link with char
 *
 * Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
