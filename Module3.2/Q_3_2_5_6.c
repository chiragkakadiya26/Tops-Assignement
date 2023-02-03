#include<stdio.h>

int main()
{
  // Sum of Odd Number;

  // int n;
  // int sum = 0;
  // printf("Enter The Number : ");
  // scanf("%d",&n);

  // for(int i=1; i<=n; i+=2){
  //   sum+=i;
  // }
  // printf("Sum of Odd Number %d is : %d",n,sum);


    // print table  given numbers ;

    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){

      printf("%d * %d = %d\n",n,i,n*i);

    }
  return 0;
}
