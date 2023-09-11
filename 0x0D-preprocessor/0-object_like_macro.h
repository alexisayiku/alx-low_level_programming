#include "main.h"
/**
* _strcat - concatenates 2 strings.
* @dest: string with concatenation
* @src: string to be concatenated
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
int lengthX, lengthY;
lengthX = 0;
lengthY = 0;
while (*(dest + lengthX) != '\0')
lengthX++;
while (*(src + lengthY) != '\0' && lengthX < 97)
{
*(dest + lengthX) = *(src + lengthY);
lengthX++;
lengthY++;
}
*(dest + lengthX) = '\0';
return (dest);
}
