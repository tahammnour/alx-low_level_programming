#include "main.h"

/**
 * _strcat - link string src to dest
 * @dest: array char
 * @src: array char
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
