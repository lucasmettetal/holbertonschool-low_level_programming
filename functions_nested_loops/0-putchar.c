#include <unistd.h>

/**
* main - prints _putchar
*
* Return: Always 0
*/

int _putchar(char c)


{
    return (write(1, &c, 1));
}

