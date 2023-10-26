#include "main.h"
#include <stdio.h>
int get_bit(unsigned long int z, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = z >> index;

	return (hold & 1);
}
