#include <stdio.h>





int main(void)
{   

 

    printf("Enter price of product: %.2f \n", price);
    scanf("%f", &price);
    printf("Enter percentage of product: %d\n", percentage);
    scanf("%d", &percentage);
    float sale = discount(price, percentage);
    printf("%.2f\n", sale);
  

    return (0);
}


float discount(float price, int percentage)
{

    return price * (100 - percentage) / 100; 

    return (0);
}