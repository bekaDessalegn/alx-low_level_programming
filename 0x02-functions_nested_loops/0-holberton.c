#include "main.h"

/**
 *main- prints Holberton, followed by a new line
 *Return:always 0 (Success)
 */
int main(void)
{
int i = 0;
char msg[] = "_putchar\n";
char c;
while (i <= 8)
{
c = msg[i];
_putchar(c);
i++;
}
return (0);
}
