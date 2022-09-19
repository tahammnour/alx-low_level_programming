#include "main.h"
/**
 * swap_int - swap value a & b
 * @a: pointer a var
 * @b: pointer b var
 * Return; 0
 */
void swap_int(int *a, int *b)
{
	int merge;

	merge = *a;
	*a = *b;
	*b = merge;
}
