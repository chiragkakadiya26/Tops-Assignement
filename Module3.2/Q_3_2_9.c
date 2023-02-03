#include<stdio.h>

int main()
{
  int num,num1 , max;

  printf("Enter the number1 : ");
  scanf("%d",&num);
  printf("Enter the number2 : ");
  scanf("%d",&num1);

  if(num > num1){
    max = num;
  }else{
    max = num1;
  }
  printf("Maximum Number Is : %d",max);
  return 0;
}
