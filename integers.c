#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


int main(){

  unsigned student = 250U;
  unsigned long long world_population = 7829334238ULL;

  printf("%12u | Students in the class\n", student);
  printf("%1211u | World population now\n", world_population);

  uint8_t count = UINT8_MAX;
  printf("%12u | count of something\n", count);

  count = count + 1;
  printf("%12u | count something +1 (OVERFLOW)\n", count);

  printf("%12d | INT32_MIN\n", INT32_MIN);  
  printf("%12d | INT32_MAX\n", INT32_MAX);
  printf("%12u | UINT32_MAX", UINT32_MAX);

  return EXIT_SUCCESS;
}