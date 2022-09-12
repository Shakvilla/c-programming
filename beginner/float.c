#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  int x;

  printf("Enter number: \n");
  scanf("%d", &x);

  while(x < 100)
  {
    printf("%d \n", x);
    x++;
  }
  return (0);
}