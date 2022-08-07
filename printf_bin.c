#include "main.h"
#include <stdlib.h>

/**
 * printf_bin - does binary conversion
 * @b: digit to convert
 *
 * Return: No. of digits printed
 */
int printf_bin(va_list b)
{
	unsigned int n;
	int x, i, temp, count = 0, z, y;
	int *bin;

	n = va_arg(b, int);
	temp = n;
	if (n > 1)
	{
		while (n > 1)
		{
			n = n / 2;
			count++;
		}
		count++;
		bin = malloc(sizeof(int) * count);
		if (bin == NULL)
			free(bin);
		i = count - 1;
		y = i;
		while (temp > 1)
		{
			x = temp % 2;
			temp = temp / 2;
			bin[i] = x;
			i--;
		}
		bin[i] = temp;

		for (i = 0; i <= y; i++)
		{
			z = bin[i];
			_putchar('0' + z);
		}
	}
	else
		_putchar('0' + n);

	return (count);
}
