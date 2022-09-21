#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: pointer integer a
 * @n: pointer integer n
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
