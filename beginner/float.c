#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  float x;

  printf("Enter number: \n");
  scanf("%f", &x);

  while(x < 100)
  {
    printf("%.2f \n", x);
    x++;
  }
  return (0);
}