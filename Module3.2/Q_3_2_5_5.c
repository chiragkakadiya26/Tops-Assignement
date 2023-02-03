#include<stdio.h>

int main()
{
  int n;
  int sum = 0;

  printf("Enter The Number : ");
  scanf("%d",&n);

  for(int i=2; i<=n; i+=2){
    sum+=i;
  }
  printf("Sum Of Even Number %d is : %d",n,sum);
  return 0;
}
