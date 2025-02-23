#include "main.h"
/**
 * _islower - returns 1 if c is lowercase; else 0.
 * @c: it's the defined charater.
*/
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return(1);
	else
		return(0);
}
