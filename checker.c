#include "main.h"

/**
 * checker - determine if any flag passed is valid
 * @c: the flag
 * @fl: previous flags
 * @l: length of the previous valid flags
 * Return: 1 true or otherwise
 */
int checker(char c, char fl[], int l)
{
	int i;
	char *valid_flags = "hl-+ #0";

	if (c >= '0' && c <= '9')
		return (1);
	else
	{
		for (i = 0; i < l; i++)
			if (c == fl[i])
				return (0);
	}

	for (i = 0; valid_flags[i]; i++)
	{
		if (c == valid_flags[i])
			return (1);
	}
	return (0);
}
