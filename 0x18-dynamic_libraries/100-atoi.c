#include "main.h"

/**
 * _atoi - converts a string to integer
 * @s: string s
 * Return: returns parsed integer
 */
int _atoi(char *s)
{
	unsigned int num = 0, sign = 1, started = 0;

	while (*s)
	{
		/*if a number is already counted and a non number is found break*/
		if (started && !_isdigit(*s))
			break;
		if (*s == '-')
			sign *= -1;
		if (_isdigit(*s))
		{
			started = 1;
			num = num * 10 + *s;
		}
		s++;
	}
	return (sign * num);
}
