#include<stdio.h>

int main()
{
  int a = 10;
  int b = 20;

  a = a + b; // a = 10 + 20 = 30 //a=30;
  b = a - b; //b = 30 - 20 = 10 //b=10;
  a = a - b; //a = 30 - 10 = 20  // a=20;

  printf("Swap Number a: %d\n",a);
  printf("Swap Number b : %d",b);

  return 0;
}
