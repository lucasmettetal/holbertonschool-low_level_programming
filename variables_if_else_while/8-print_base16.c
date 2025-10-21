#include <stdio.h>

/**
* main - put a number 1 to 9
*
* Return: Always 0
*/

int main(void)
{
char x = 0;
while (x <= 15)


{
if (x < 10)
putchar('0' + x);
else
putchar('a' + (x - 10));
x++;

}
putchar('\n');

return (0);

}
