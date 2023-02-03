#include<stdio.h>

int main()
{
  int year;
  printf("Enter The Year: ");
  scanf("%d",&year);

 if((year % 400 == 0)&&(year % 100 != 0) ||(year % 4 == 0)){
  printf("%d this is leap year",year);
 }else{
  printf("%d this not leap year",year);
 }
  return 0;
}
