/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

#include "main.h"

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

