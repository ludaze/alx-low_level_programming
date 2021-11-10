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
    int num1=argv[1];
    int num2=argv[2];
    int mul;
    
    if (argc==3)
    {
        mul= num1 * num2;
        return (mul);
    }
    else
    {
        printf("Error\n");
        return (1);
    }
}
