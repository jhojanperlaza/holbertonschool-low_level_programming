#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the number of arguments passed into it
*@argc:contains the number of arguments passed to the program
*@argv:is a one-dimensional array of strings.
* Return: the answer
*/
int main(int argc, char *argv[])
{
  int n;
  int m;

  if (argc > 1)
  {
	  n = atoi(argv[1]);
	  m = atoi(argv[2]);
	  printf("%d\n", n * m);
  }
  else if (argc == 1)
  {
	  printf("Error\n");
	  return (1);
  }
  return (0);
}
