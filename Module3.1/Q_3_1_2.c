#include<stdio.h>

int main()
{
  int a;
  int b;
  int sum;
  int sub;
  int multi;
  float div;
  int modulo;

  printf("Enter the First Number: ");
  scanf("%d",&a);
  printf("Enter the Second Number: ");
  scanf("%d",&b);

  sum = a + b;
  sub = a - b;
  multi = a * b;
  div = (float)a / b;
  modulo = a % b;

  printf("sum = %d\n",sum);
  printf("subtraction = %d\n",sub);
  printf("multiplication = %d\n",multi);
  printf("division = %.1f\n",div);
  printf("modulo = %d",modulo);

  return 0;
}
