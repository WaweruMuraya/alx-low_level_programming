/**
 * _isupper -check if char is an uppercase letter
 * @c: char to check
 *
 * Return: 0 or 1
 */

#include "main.h"

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

