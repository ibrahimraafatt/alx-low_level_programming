#include "main.h"
#include <stdio.h>

unsigned int binary_to_uint(const char *d)
{
	unsigned int total, power;
	int len;

	if (d == NULL)
		return (0);

	for (len = 0; d[len]; len++)
	{
		if (d[len] != '0' && d[len] != '1')
			return (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (d[len] == '1')
			total += power;
	}

	return (total);
}
