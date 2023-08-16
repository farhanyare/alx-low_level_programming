#include "main.h"

/**
 * _islower - checks if the char is lowercase
 * @c: a character argument
 * Return: 1 if its true  0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
