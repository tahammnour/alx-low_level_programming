#include "main.h"
#include <stdio.h>
/**
 * print_array - print same num
 * @a: array pointer
 * @n: variable
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}