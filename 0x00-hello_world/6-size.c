#include <stdio.h>
/**
 * main - A program that prints the size of various
 * Return: Always 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int e;
float d;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsignedlong)sizeof(e));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
return (0);
}
