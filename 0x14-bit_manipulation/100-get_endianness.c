#include "main.h"
int get_endianness(void)
{
	int num;
	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
