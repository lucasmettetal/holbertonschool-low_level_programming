#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet in lowercase
*/

void print_alphabet_x10(void)
{
int count = 0;
char alphabet;
while (count < 10)

{
alphabet = 'a';

while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
count++;
}
}
