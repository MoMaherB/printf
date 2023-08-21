#include "main.h"

/**
 * printhexlow - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printhexlow(va_list val)
{
	int var1;
	int *arr;
	int count = 0;
	unsigned int ar = va_arg(val, unsigned int);
	unsigned int temp = ar;

	while (ar / 16 != 0)
	{
		ar /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (var1 = 0; var1 < count; var1++)
	{
		arr[var1] = temp % 16;
		temp /= 16;
	}
	for (var1 = count - 1; var1 >= 0; var1--)
	{
		if (arr[var1] > 9)
			arr[var1] = arr[var1] + 39;
		_putchar(arr[var1] + '0');
	}
	free(arr);
	return (count);
}
