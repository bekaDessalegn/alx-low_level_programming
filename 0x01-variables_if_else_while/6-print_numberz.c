#include <stdio.h>
/**
 * main - displays the integers from 0 to 9 using putchar.
 * Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
	putchar(ch);
	}
	putchar(10);
	return (0);
}
