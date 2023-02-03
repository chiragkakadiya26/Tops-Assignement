#include<stdio.h>

int main()
{
  float Amount , rate, time, interest;
  printf("Enter Amount: ");
  scanf("%f",&Amount);
  printf("Enter Interest: ");
  scanf("%f",&rate);
  printf("Enter time of Amount: ");
  scanf("%f",&time);

  interest = (Amount*rate*time)/100;
  printf("The Interest of %.1f",interest);

  return 0;
}
