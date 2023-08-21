#include "main.h"

/**
 * printPointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printPointer(va_list val)
{
	void *ptr;
	char *str = "(nil)";
	long int var1;
	int var2;
	int i;

	ptr = va_arg(val, void*);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	var1 = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	var2 = printHex_aux(var1);
	return (var2 + 2);
}
