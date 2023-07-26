#include<stdio.h>
#include<unistd.h>
/**
** main - Entry point
*
* Return: Always 1
*/
int main(void)
{
const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 59; /* Length of the quote */
write(STDERR_FILENO, quote, len);
return (1);
}
