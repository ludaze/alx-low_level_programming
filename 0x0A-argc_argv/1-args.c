#include <stdio.h>
/**
  *main -prints number of arguements passed to it.
  *@argc:number of args.
  *@argv:array of size argc.
  *Return: return o on success.
  */
int main(int argc, char *argv[])
{
	printf("The number of arguments is: %d", argv[argc]);
	return (0);
}
