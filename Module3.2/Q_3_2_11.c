#include<stdio.h>

int main()
{
   int n,fdigit,ldigit,sum;

   printf("Enter Number : ");
   scanf("%d",&n);

   ldigit = n % 10;
  //  printf("L : %d\n",ldigit);
   while (n >= 10)
   {
    n = n /10;
   }
   fdigit = n;
  //  printf("F : %d\n",fdigit);
   sum -= fdigit + ldigit;

   printf("Sum of Digit Is : %d",sum);




  return 0;
}
