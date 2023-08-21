#include "main.h"
/**
 * printString - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printString(va_list val)
{
	char *str;
	int i, ln;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		ln = _strlen(str);
		for (i = 0; i < ln; i++)
			_putchar(str[i]);
		return (ln);
	}
	else
	{
		ln = _strlen(str);
		for (i = 0; i < ln; i++)
			_putchar(str[i]);
		return (ln);
	}
}
