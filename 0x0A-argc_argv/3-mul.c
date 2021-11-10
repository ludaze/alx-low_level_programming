#include <stdio.h>
#include <stdlib.h>
/**
  *main - prints result of multiplication followed by a new line.
  *@argc: number of arguments passed.
  *@argv: array of size argc containing arguments passed.
  *
  *Return: 0 on success.
  *1 on error.
  */
int main(int argc, char *argv[])
{
	int count, mul;

	mul = 1;
	if (argc == 3)
	{
		for (count = 1; count < argc; count++)
		{
			mul *= atoi(argv[count]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
