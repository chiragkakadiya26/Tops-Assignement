#include<stdio.h>

int main()
{
  // int n, reverse = 0, remainder;
  //   printf("Enter an integer: ");
  //   scanf("%d", &n);
  //   while (n != 0)
  //   {
  //       remainder = n % 10;
  //       reverse = reverse * 10 + remainder;
  //       n /= 10;
  //   }
  //   printf("Reversed number: %d", reverse);

  int n = 64728;
  int revers = 0;
  int reminder;

  while(n != 0){
    reminder = n % 10;
    revers = revers * 10 + reminder;
     printf("rem  : %d\n",reminder);
    printf("rev : %d\n",revers);
    n/=10;

  }
  printf("Revers Number : %d",revers);

  return 0;
}
