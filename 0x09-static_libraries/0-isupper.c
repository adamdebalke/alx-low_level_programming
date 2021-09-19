#include "main.h"
#include <stdio.h>

/**
*_isupper - Function that checks for uppercase character
*@c: Number tu be checked
*Return: 1 if c is uppercase and 0 otherwise
*/

int _isupper(int c)
{

	int m;

	if (c >= 'A' && c <= 'Z')

	{

		m = 1;

	}

	else

	{

		m = 0;

	}

	return (m);

}
