#include<stdio.h>

int main()
{
  int n;
  int f = 1;
  printf("Enter Factorial Number : ");
  scanf("%d",&n);

  for(int i=1; i<=n; i++){
    f = f * i;

  }
  printf("Factorial Number %d is : %d\n",n,f);

  return 0;
}
