#include <stdio.h>
#include "hamada.h"

#define ARR_SIZE  4


int main(void)
{
  double arr[ARR_SIZE];
  double x, y;
  printf("\nPlease Enter Array Elements:\n");
  for (int loop_counter = 0 ; loop_counter < ARR_SIZE ; loop_counter++)
  {
    printf("arr[%d] = ",loop_counter);
    scanf("%lf",&arr[loop_counter]);
  }
  
  hamada(arr,&x,&y);
  printf("\nMax = %.2lf",x);
  printf("\nMin = %.2lf",y);
  printf("\n");
  
  return 0;
}