#include "main.h"
/**
 * printRot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */
int printRot13(va_list args)
{
	int var1, var2, count = 0;
	int k = 0;
	char *str = va_arg(args, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (var1 = 0; str[var1]; var1++)
	{
		k = 0;
		for (var2 = 0; a[var2] && !k; var2++)
		{
			if (str[var1] == a[var2])
			{
				_putchar(b[var2]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[var1]);
			count++;
		}
	}
	return (count);
}

