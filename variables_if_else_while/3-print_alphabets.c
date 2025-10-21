#include <stdio.h>

/**
* main - print alphabet lowcase en uppercase
*
* Return: Always 0
*/

int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
alphabet = 'A';
while (alphabet <= 'Z')
{
putchar(alphabet);
alphabet++;
}

putchar('\n');
return (0);
}
