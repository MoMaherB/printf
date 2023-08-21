#include "main.h"
/**
 * printExcluString - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printExcluString(va_list val)
{
	char *str;
	int count, ln = 0;
	int cast;

	str = va_arg(val, char *);
	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] < 32 || str[count] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			ln = ln + 2;
			cast = str[count];
			if (cast < 16)
			{
				_putchar('0');
				ln++;
			}
			ln = ln + printHEX_AUX(cast);
		}
		else
		{
			_putchar(str[count]);
			ln++;
		}
	}
	return (ln);
}

