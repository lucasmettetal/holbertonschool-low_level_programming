#include <stdio.h>

/**
* main - put alphabet in lowcase but not "e" and "q"
*
* Return: Always 0
*/

int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
if (alphabet != 'e' && alphabet != 'q')
{
putchar(alphabet);
}
alphabet++;

}
putchar('\n');
return (0);
}
