#include "main.h"
#include <stdio.h>
void print_binary(unsigned long int z)
{
	unsigned long int temp;
	int shifts;

	if (z == 0)
	{
		printf("0");
		return;
	}

	for (temp = z, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((z >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
