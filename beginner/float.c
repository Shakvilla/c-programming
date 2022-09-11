#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  float x;

  printf("Enter number: \n");
  scanf("%2f", &x);

  while(x < 100)
  {
    printf("%f", x);
    x++;
  }
  return (0);
}