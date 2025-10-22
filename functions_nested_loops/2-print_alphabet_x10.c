#include "main.h"

/**
* main - Prints the alphabet in lowercase
*/

void print_alphabet(void)
{
int count = 0;
char alphabet;
while (alphabet < 5)

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