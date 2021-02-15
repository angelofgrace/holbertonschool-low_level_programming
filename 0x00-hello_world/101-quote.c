#include <unistd.h>

/**
* main - prints 59 characters to std error
*
* Return: 1 if written successfully
*/

int main(void)
{

write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

return (1);

}
