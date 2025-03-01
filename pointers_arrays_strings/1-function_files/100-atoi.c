#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _atoi - converts a string to an integer.
 * @s: string to convert
 * Return: integer value of string, or 0 if no numbers.
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit_found = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
			/* Sign remains the same */
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit_found = 1;

			if (result > 214748364 || (result == 214748364 && (*s - '0') > 7))
			{
				if (sign == 1)
					return (2147483647);  /* INT_MAX */
				else
					return (-2147483648); /* INT_MIN */
			}
			result = result * 10 + (*s - '0');
		}
		else if (digit_found)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
