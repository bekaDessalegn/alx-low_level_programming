#include <stdio.h>
/**
 * main - displays all numbers of base 16 in lower case.
 * Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
	putchar(ch);
	if (ch == 57)
	{
	continue;
	}
	putchar(44);
	putchar(32);
	}
	putchar(10);
	return (0);
}
