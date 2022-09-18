#include <stdio.h>
/**
* temp - Converts temperature from celcius to * * *  * farenhei
*/

double temp_to_cel (double temp)
{  
  double temperature;
  return temperature = (temp * 1.8 ) + 32;
}

double temp_to_far(double temp)
{
  double temperature;
  return temperature = (temp - 32) / 1.8;
}