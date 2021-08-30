#include <stdio.h>

/**
* main - prints out lower case alphabets X10.
* Return: returns 0.
*/

int main(void)
{
int i = 0;

while (i < 10)
{
for (int ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
i++;
}
return (0);
}
