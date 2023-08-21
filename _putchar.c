#include "main.h"

/**
 * _putchar - writes the character ones a time
 * @c: The character to print
 *
 * Return: success 1 and error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
