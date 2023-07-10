#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int result;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
result = _atoi(argv[1]) * _atoi(argv[2]);
printf("%d\n", result);
return (0);
}
