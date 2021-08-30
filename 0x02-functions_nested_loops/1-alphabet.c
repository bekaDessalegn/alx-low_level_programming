#include <stdio.h>

/**
 * main - displays all lower case alphabets using putchar
 * Return: 0 if exited properly, non-zero otherwise
*/

int main(void)
{
for (int i = 97; i < 123; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
