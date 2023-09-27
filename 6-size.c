#include <stdio.h>

/**
* main - entry point
*
* Return: returns 0 at success
*/

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("size of char; %lu bytes\n", sizeof(a));
printf("size of int; %lu bytes\n", sizeof(b));
printf("size of long int; %lu bytes\n", sizeof(c));
printf("size of long long int; %lu bytes\n", sizeof(d));
printf("size of float; %lu bytes\n", sizeof(f));

return (0);
}
