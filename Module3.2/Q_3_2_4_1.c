#include<stdio.h>

int main()
{

  int days;

  printf("Enter Day : ");
  scanf("%d",&days);

  switch (days)
  {
  case 1:
    printf("Monday");
    break;

    case 2:
    printf("Tuesday");
    break;

    case 3:
    printf("Wednesday");
    break;

    case 4:
    printf("Thursday");
    break;

    case 5:
    printf("friday");
    break;

    case 6:
    printf("saturday");
    break;

    case 7:
    printf("Sunday");
    break;

  default:
    printf("Enter The Days of 1 to 7 !!");
    break;
  }

  return 0;
}
