#include "main.h"
/**
 * _isupper check if ch is uppercase
 *
 * @c: character integer to check
 * Return 1 if c is uppercase 
 * return 0 otherwise
 */
int _isupper(int c)
{	if (c >= 65 && c <=90)
		return (1);
	return (0);
}
