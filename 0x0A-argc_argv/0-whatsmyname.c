#include <stdio.h>
#include <stdlib.h>
/**
*main - printing of the name of the executable. 
*@argc: argument count or the  size of arguments.
*@argv: argument vector
*
*Return: always 0.
*/
int main(int argc __attribute__((unused)), char **argv)
{
printf("%s\n", *argv);
return (0);
}
