#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument that counts argument input
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int number2, number1, product;

	if (argc != 3)
		printf("Error\n");
	else
	{
		number1 = atoi(argv[1]);
		number2 = atoi(argv[2]);
		product = number1 * number2;
		printf("%d\n", product);
	}
	return (0);
}
