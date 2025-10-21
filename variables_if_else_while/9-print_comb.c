#include <stdio.h>

/**
* main - put a number 1 to 9
*
* Return: Always 0
*/

int main(void)
{
int x = 0;

while (x < 10)
{
putchar(x + '0');
if (x < 9)
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');

return (0);

}
