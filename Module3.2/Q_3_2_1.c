#include<stdio.h>

int main()
{
  char choice;
  float num1,num2;

  printf("Enter An Operator (+,-,*,/,%) : ");
  scanf("%c",&choice);

  printf("Enter the Number1 : ");
    scanf("%f",&num1);
    printf("Enter the Number2 : ");
    scanf("%f",&num2);



  switch (choice)
  {
  case '+':

    printf("Addition : %.1f + %.1f = %.1f",num1,num2, num1 + num2);

    break;
    case '-':

     printf("Subtraction : %.1f - %.1f = %.1f",num1,num2, num1 - num2);

    break;
     case '*':

     printf("Multiplication : %.1f * %.1f = %.1f",num1,num2, num1 * num2);

    break;
     case '/':

     printf("Division : %.1f / %.1f = %.1f",num1,num2, num1 / num2);

    break;
     case '%':

     printf("Module : %d %% %d = %d",(int)num1,(int)num2, (int)num1 % (int)num2);

    break;

  default:
      printf("Enter The Valid Number !!");
    break;
  }



  return 0;
}
