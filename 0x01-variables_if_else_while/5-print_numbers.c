#include <stdio.h>
/**
 * main - displays the integers from 0 to 9
 * Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
	printf("%d", ch);
	}
	putchar(10);
	return (0);
}
