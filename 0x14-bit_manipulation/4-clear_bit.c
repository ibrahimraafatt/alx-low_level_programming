#include "main.h"
#include <stdio.h>
int clear_bit(unsigned long int *z, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*z >> index) & 1)
		*z -= i;

	return (1);
}
