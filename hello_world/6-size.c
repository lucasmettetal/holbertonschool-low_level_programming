#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0
*/


int main (void)
{
// Use %zu for size_t if your compiler supports it.
printf("Size of integer: %ul",sizeof(int));
printf("Size of float: %ul",sizeof(float));
printf("Size of double: %ul",sizeof(double));
printf("Size of char: %ul",sizeof(char));
printf("Size of 167: %ul",sizeof (167));
printf("Size of 3.1415926: %ul",sizeof(3.1415926));
printf("Size of integer: %ul",sizeof(‘$’));
return 0;
}
