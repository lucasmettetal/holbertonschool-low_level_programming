#include <stdio.h>

/**
* main -  reverse alphabet
*
* Return: Always 0
*/

int main(void)
{
char alphabet = 'z';
while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);
}
