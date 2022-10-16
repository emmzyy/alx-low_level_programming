#include <stdio.h>
/**
 * main - using char, prints numbers from 0-10
 * blank space
 * Return: 0
 */
int main(void)
{
	int x;
	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	putchar('\n');
	return (0);
}
