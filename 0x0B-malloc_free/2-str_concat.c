#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - check the code for ALX School students.
 * @str: input
 * Return: Always 0
 */
char *_strdup(char *str)
{
char *nstr;
unsigned int len, i;
if (str == NULL)
{
return (NULL);
}
len = 0;
while (str[len] != '\0')
{
len++;
}
nstr = malloc(sizeof(char) * (len + 1));
if (nstr == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
nstr[i] = str[i];
}
nstr[len] = '\0';
return (nstr);
}
