#include <stdio.h>

/**
 * main - this program prints alphapetics in reverse
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);
}

