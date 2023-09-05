#include <ctype.h>
/**
*main - execution of addition o two numbers.
*@argc: argument count or the size of arguments.
*@argv: argument vector
*Return: 1 for less of 2 arguments or nondigit numbers, 0 success
*/
int main(int argc, char **argv)
{
int sum, a, b;
sum = 0;
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (!isdigit(argv[a][b]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[a]);
}
printf("%d\n", sum);
return (0);
}
