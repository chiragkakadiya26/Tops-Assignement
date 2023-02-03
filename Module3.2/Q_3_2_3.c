#include<stdio.h>

int main()
{
  int number;

  printf("Enter Number : ");
  scanf("%d",&number);

  number %2 != 0 ? printf("The Number Is Odd !!") : printf("The Number Is Even !!");

  return 0;
}
