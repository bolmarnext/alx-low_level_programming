#include "main.h"

/**
 * get_endianness - checks if the machine is a little or big end
 * Return: 0 is big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
