#include <stdio.h>
/**
 * main - displays all lower case alphabets in ascending order
 * Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar(10);
	return (0);
}
