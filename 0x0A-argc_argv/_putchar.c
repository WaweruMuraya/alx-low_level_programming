/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */

#include <stdio.h>
#include "main.h"

int _putchar(char c)
{
return (write(1, &c, 1));
}

