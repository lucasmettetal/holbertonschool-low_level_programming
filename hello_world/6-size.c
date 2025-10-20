#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0
*/


int main (void)
{
 // Use %zu for size_t if your compiler supports it.
 printf("sizeof(int)       = %d\n",sizeof(int));
 printf("sizeof(float)     = %d\n",sizeof(float));
 printf("sizeof(double)    = %d\n",sizeof(double));
 printf("sizeof(char)      = %d\n",sizeof(char));
 printf("sizeof(167)       = %d\n",sizeof(167));
 printf("sizeof(3.1415926) = %d\n",sizeof(3.1415926));
 printf("sizeof('$')       = %d\n",sizeof('$'));
 return 0;
}
