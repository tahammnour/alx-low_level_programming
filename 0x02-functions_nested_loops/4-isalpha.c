#include "main.h"
/**
 * _isalpha - check if its alpahbet upper or lower
 * @c: param int
 * Return: value 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
