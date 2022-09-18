#include <stdio.h>
#include "main.h"

int main(void) {

  int curr_temp;
  printf("Enter user current tempereture: \n");
  scanf("%d", &curr_temp);

  printf("Temperature to Celsius is: %lf \n", temp_to_cel(curr_temp));
  printf("Temperature to Farenheit is: %lf \n", temp_to_far(curr_temp));
  
  return 0;
}